import requests as req
from bs4 import BeautifulSoup as bs
import pandas as pd

URL = "https://www.bukalapak.com/c/komputer/laptop?from=nav_header"
page = req.get(URL)

soup = bs(page.content, "html.parser")
produk = soup.find_all("div", "bl-product-card__description")

data = []
for item in produk:
	nama = item.select(".bl-product-card__description-name")
	price = item.select(".bl-product-card__description-price p")
	data.append({
	"nama": nama[0].text.strip(),
	"harga": price[0].text.strip()
	})

df = pd.DataFrame(data)
print(df)