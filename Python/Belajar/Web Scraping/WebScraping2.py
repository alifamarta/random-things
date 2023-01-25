import requests as req
from bs4 import BeautifulSoup as bs
import pandas as pd

URL = "https://realpython.github.io/fake-jobs/"
page = req.get(URL)

soup = bs(page.content, "html.parser")
results = soup.find(id="ResultsContainer")

job_elements = results.find_all("div", class_="card-content")

for job in job_elements:
	title_element = job.find("h2", class_="title")
	company_element = job.find("h3", class_="company")
	location_element = job.find("p", class_="location")

	print(title_element.text.strip())
	print(company_element.text.strip())
	print(location_element.text.strip())
	print()