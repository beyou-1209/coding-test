s = int(input())

n=0
cnt=0
while 1:
    if s > n: # 같으면 안되는 이유: s와 n이 같아져버리면 n은 그 자체로 집합이 되어버린다... 서로다른 자연수의 합 조건을 만족할 수 없다.
        n += 1
        s = s - n
        cnt += 1
    else:
        print(cnt)
        break

# 왜 그리디 알고리즘인지 잘 모르겠다.....