cube = lambda x: x * x * x # complete the lambda function

def fibonacci(n):

    # return a list of fibonacci numbers
    if n == 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fibs = [0, 1]
        for _ in range(n - 2):
            fibs.append(fibs[-1] + fibs[-2])
        return fibs
