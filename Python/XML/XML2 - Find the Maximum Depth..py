maxdepth = 0
def depth(elem, level):
    global maxdepth

    # your code goes here
    if len(elem) == 0:
        maxdepth = 0
    else:
        maxdepth = 1 + max(depth(e, level) for e in elem)
    return maxdepth
