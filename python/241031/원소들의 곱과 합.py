"""
문제
: 정수가 담긴 리스트 num_list가 주어질 때,
모든 원소들의 곱이 모든 원소들의 합의 제곱보다 작으면 1을 크면 0을 return하도록 solution 함수를 완성해주세요.
"""

def solution (num_list):
    ret1 = 1
    ret2 = 0

    for i in range(len(num_list)):
        ret1 *= num_list[i]
        ret2 += num_list[i]

    if ret1 < ret2**2:
        return 1
    
    elif ret1 > ret2**2:
        return 0