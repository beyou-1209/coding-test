def solution(a, b):
    n1 = int(str(a) + str(b))
    n2 = 2*a*b
    if n1 > n2:
        return n1
    elif n2 > n1:
        return n2