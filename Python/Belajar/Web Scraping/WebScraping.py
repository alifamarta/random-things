import requests as req
from bs4 import BeautifulSoup as bs
import pandas as pd

URL = "https://jadwalsholat.org/jadwal-sholat/monthly.php"  
page = req.get(URL)


soup = bs(page.text, "html.parser")
jadwal = soup.select('.table_highlight td')
for waktu in jadwal:
  print(waktu.text)