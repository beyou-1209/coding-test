def solution(ineq, eq, n, m):
    if ((n >= m) and (ineq == ">")) or ((n <= m) and (ineq == "<")):
        return 1

    else:
        return 0

