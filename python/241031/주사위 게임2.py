"""
문제
: 1부터 6까지 숫자가 적힌 주사위가 세 개 있습니다.
세 주사위를 굴렸을 때 나온 숫자를 각각 a, b, c라고 했을 때 얻는 점수는 다음과 같습니다.
- 세 숫자가 모두 다르다면 a + b + c 점을 얻습니다.
- 세 숫자 중 어느 두 숫자는 같고 나머지 다른 숫자는 다르다면 (a + b + c) × (a2 + b2 + c2 )점을 얻습니다.
- 세 숫자가 모두 같다면 (a + b + c) × (a2 + b2 + c2 ) × (a3 + b3 + c3 )점을 얻습니다.
세 정수 a, b, c가 매개변수로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.
"""

def solution(a, b, c):
    answer = 0
    
    result = a+b+c
    result2 = a**2 + b**2 + c**2
    result3 = a**3 + b**3 + c**3
    
    if a != b != c != a:
        answer = result
    elif a == b == c:
        answer= (result) * (result2) * (result3)
    else:
        answer = (result) * (result2)

    return answer


# set() 함수를 이용하여 중복 추출도 가능하다.

# def solution(a, b, c):
#     check=len(set([a,b,c]))
#     if check==1:
#         return 3*a*3*(a**2)*3*(a**3)
#     elif check==2:
#         return (a+b+c)*(a**2+b**2+c**2)
#     else:
#         return (a+b+c)
