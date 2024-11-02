# 변수명
# n : 가진 돈
# m : 돈을 나누어 가질 사람의 수
# python으로 푼다면 몫과 나머지를 구하는 간단한 문제에 불과하다.
# 추후에 C++로 풀어보면 재밌을 것 같다. 주어진 입력 값의 정수가 int 나 long헝의 범위를 초과하기 때문...

n, m = map(int, input().split())
print(n//m)
print(n%m)