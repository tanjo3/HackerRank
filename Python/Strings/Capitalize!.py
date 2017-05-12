def capitalize(string):
    words = string.split(" ")
    return " ".join([x.capitalize() for x in words])
