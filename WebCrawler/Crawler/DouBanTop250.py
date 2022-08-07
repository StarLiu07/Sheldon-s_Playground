import requests #导入requests包
import re #导入re模块

url = "https://movie.douban.com/top250" #存放地址

headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36"
}

resp = requests.get(url,headers = headers)

page_content = resp.text #页面源代码

#解析数据
obj = re.compile(r'<li>.*?<span class="title">(?P<name>.*?)</span>.*?'
r'<p class="">.*?<br>(?P<year>.*?)&nbsp.*?'
r'<span class="rating_num" property="v:average">(?P<score>.*?)</span>.*?'
r' <span>(?P<comments>.*?)</span>',re.S)

#开始匹配
ret = obj.finditer(page_content)
for it in ret:
    print(it.group("name"),
    it.group("year").strip(),
    it.group("score").strip(),
    it.group("comments").strip())

resp.close()