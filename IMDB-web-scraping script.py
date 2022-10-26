# this is the script that is used to get all the 
# 1: movie names
# 2: runtime
# as the dictaionary {'movie names' : 'runtime'}




from cProfile import run
from urllib.parse import urljoin
from selenium import webdriver
from bs4 import BeautifulSoup
# import pandas as pd

driver = webdriver.Chrome("Downloads/chrome_driver/chromedriver")

movie = {}
maxi = 0
url = "https://www.imdb.com/search/title/?release_date=2018-01-01,2018-12-31&sort=num_votes,desc&start=1000&ref_=adv_nxt"
ct = 0
while(True):
    driver.get(url)
    
    content = driver.page_source
    soup = BeautifulSoup(content,features="html.parser")
    for a in soup.findAll('div', attrs={'class':'lister-item-content'}):
        # print("reached")

        sno =a.find('span',attrs = {'class':"lister-item-index unbold text-primary"}).text[:-1]
        # sno.split(',')
        sno = int(sno.replace(',', ''))
        print(sno)
        
        if sno>=1000 and sno <= 8000:
            name = a.find('h3', attrs={'class':'lister-item-header'})
            name = name.find('a')
            # print(name.text[4:][:-8])
            runtime = a.find('span',attrs={'class':'runtime'})
            # print(name.text,str(runtime.text))
            if runtime is None:
                runtime1 = 0
            else:
                runtime1 = int(runtime.text[:-4])
            if maxi < runtime1:
                movie.update({name.text: str(runtime.text[:-4])})
                maxi = runtime1
            ct = ct+1
        else:                                           #updated -- works when starting form page no 1000
            break                                       #updated
        print(ct,maxi)    

       
    next_page = soup.find('a', attrs={'class':'lister-page-next next-page'})
    # print(next_page)
    if next_page and ct<=7000:
        next_url = next_page.get('href')
        url = urljoin(url,next_url)
    else:
        break

print(movie)
