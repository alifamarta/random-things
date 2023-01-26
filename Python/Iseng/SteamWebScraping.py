import requests
from bs4 import BeautifulSoup
import pandas as pd

URL = "https://store.steampowered.com/search/?filter=topsellers&os=win"
page = requests.get(URL)

soup = BeautifulSoup(page.content, "html.parser")
result = soup.find('div', attrs={'id': 'search_resultsRows'}).find_all ('a')

data = []

for item in result:
    title = item.find('span', attrs = {'class': 'title'}).text.strip()
    release = item.find('div', attrs = {'class': 'col search_released responsive_secondrow'}).text.strip()

    data.append({
        'TITLE': title,
        'RELEASE DATE': release
    })

dataframe = pd.DataFrame(data)

print("\t \t TRENDING ON STEAM\n")
print(dataframe)