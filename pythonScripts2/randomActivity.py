import requests

while True:
    url = requests.get("https://www.boredapi.com/api/activity/")
    print(url.json()['activity'])
    choice = input('\nDo you want to suggest anther acivity? y(yes) n(no)\n')
    if choice.lower() == 'n':
        break