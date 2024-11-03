X = input()

stick = [64 ,32, 16, 8, 4, 2, 1]
count = 0

for i in range(len(stick)):
    if X >= stick[i]:
        count += 1
        X -= stick[i]
    
    elif X == 0:
        break

print(count)

# 정답률이 75퍼센트인데 잘 모르겠음.... ㄹㅈㄷ개똥멍청이쉑