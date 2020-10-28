from requests import get
import json
from string import ascii_lowercase
from hashlib import sha1
def descriptografar(texto):
    texto = texto.split(" ")
    alfabeto = list(ascii_lowercase)
    textoDescript = ""
    for parte in texto:
        for l in range(len(parte)):
            for a in range(len(alfabeto)):
                if parte[l] == alfabeto[a]:
                    textoDescript+= alfabeto[a-1]
            if parte[l] not in alfabeto:
                textoDescript+=parte[l]
        textoDescript+=" "
    return textoDescript


def salvar(objeto):
     with open("answer.json", 'w') as json_file:
        json.dump(objeto, json_file)
request = get("https://api.codenation.dev/v1/challenge/dev-ps/generate-data?token=16172ebacdfd38d47f42b3316ac40b9af8174444")
if(request.status_code == 200):
    dados_json = request.json()
    decifrado = descriptografar(dados_json["cifrado"])
    dados_json["decifrado"] = decifrado


    cripto = sha1(decifrado.encode("utf-8")).hexdigest()
    print(cripto)
    
    # dados_json["resumo_criptografico"] = cripto
    # salvar(dados_json)
