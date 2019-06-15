# Enter your code here. Read input from STDIN. Print output to STDOUT
import datetime
date = datetime.datetime.strptime(input(), "%m %d %Y")
print(date.strftime("%A").upper())
