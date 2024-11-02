# 구간의 합 < M : 오른쪽 포인터 ++
# 구간의 합 > M : 왼쪽 포인터 ++
# 구간의 합 == M : 카운트 증가!

# 변수명
# N : 수열의 개수
# left : 왼쪽 포인터
# right : 오른쪽 포인터
# cnt : 경우의 수 증가
# sum_nums : 구간(left~right)
# total : 구간의 부분 합

N, M = map(int, input().split())
nums = list(map(int, input().split()))

left, right = 0, 1
cnt = 0
while right <= N and left <= right:
    sum_nums = nums[left:right]
    total = sum(sum_nums)

    if total < M:
        right += 1
    
    elif total > M:
        left += 1

    elif total == M:
        cnt += 1
        right += 1 # 그 다음으로 넓은 풀에서 total == M 이 되는 값을 찾아야하기 때문이다.

    
print(cnt)
        