import requests

city = "Istanbul"
url = f"http://wttr.in/{city}?format=3"
response = requests.get(url)
print(response.text)
