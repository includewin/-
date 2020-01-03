import os
from bs4 import BeautifulSoup
import requests
import re


def creat_tree():
    target = 'https://www.biqukan.com/1_1094'
    server = 'http://www.biqukan.com/'
    req = requests.get(url=target)
    req.encoding = 'GB2312'
    html = req.text
    div_bf = BeautifulSoup(html)
    #div = div_bf.find_all('div', class_='listmain')
    #try:
    #    texts = texts[0].text.replace(' ', '\n').replace('\xa0' * 8, '\n')
    #except:
    #    pass
    #print(div)
    a = div_bf.find_all('a')
    for each in a:
        str = server + each.get('href')
        if re.match(r'http://www.biqukan.com//\d+\_\d+\/\d+.html', str) != None:
            crawl_text(str)

def crawl_text(target):
    req = requests.get(url=target)
    req.encoding = 'GB2312'  # 更改编码方式，防止乱码
    html = req.text
    bf = BeautifulSoup(html)
    texts = bf.find_all('div', class_='showtxt')
    try:
        texts = texts[0].text.replace(' ', '\n').replace('\xa0' * 8, '\n')
    except:     
        pass
    print(texts)

def spare():
    pass

if __name__ == "__main__":
    try:
        creat_tree()
    except:
        spare()
    finally:
        try:
            os.system("/mnt/pythom3.6/bin/led_on")
            time.sleep(3)
            os.system("/mnt/pythom3.6/bin/led_off")
        except:
            print('Execution failed')
        finally:
            pass
