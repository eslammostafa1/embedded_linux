import requests

while True:
    url = requests.get("https://api.ipify.org/?format=json")
    ip = url.json()['ip']
    print(' your IP is : {} '.format(ip))
    break 
