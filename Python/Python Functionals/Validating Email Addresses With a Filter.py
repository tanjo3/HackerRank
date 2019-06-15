import re

def fun(s):

    # return True if s is a valid email, else return False
    return re.match("^[\w\d-]+@[A-Za-z\d]+\..{1,3}$", s)
