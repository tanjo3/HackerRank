# Enter your code here. Read input from STDIN. Print output to STDOUT
from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):

    def handle_starttag(self, tag, attrs):

        print(tag)
        for attr in attrs:
            print(f"-> {attr[0]} > {attr[1]}")


    def handle_startendtag(self, tag, attrs):

        print(tag)
        for attr in attrs:
            print(f"-> {attr[0]} > {attr[1]}")


n = int(input())
parser = MyHTMLParser()

for _ in range(n):
    parser.feed(input())
parser.close()
