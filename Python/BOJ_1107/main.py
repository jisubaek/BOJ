# 못풀었음ㅠ
goto = list(map(int,input()))
breakcount = int(input())
breakbutton = list(map(int,input().split()))
livebutton = []

simple=100
min = []
max = []
count = 0

for i in range(0,10):
    livebutton.append(i)

for i in range(0,len(breakbutton)):
    livebutton[breakbutton[i]] = -1

for i in range(0,(len(goto))):
    if goto[i] != livebutton[goto[i]+1]: #만약 goto의 첫숫자가 livebutton[]에 -1로 저장되어있으면
        for z in range(goto[i],-1,-1): # 해당 수보다 작은 값을 채택
            if goto[z] == livebutton[z] : # 내림차순으로 진행 중 버튼이 살아있으면
                min.append(goto[z])
        for z in range(goto[i],10):
            if goto[z] == livebutton[z] :
                max.append(goto[z])
    else:
        min.append(goto[i])
        max.append(goto[i])

min = int(''.join(map(str, min)))
max = int(''.join(map(str, max)))
print(min)
print(max)

mindif = abs(goto-min)
maxdif = abs(goto-max)

simpledif = abs(goto-simple)

#세 차이 중 최소값 찾기
realmin=mindif+len(goto) #총 버튼 누름 수 계산해서 최소값에 넣기

if maxdif+len(goto)<realmin:
    realmin = maxdif+len(goto)
if simpledif<realmin:
    realmin = simpledif

# 버튼 이동 수 구하기 : 가까운 값을 찾았으니 이제 누름버튼으로 움직이게쬬?
if realmin == mindif:
    count = mindif+len(goto)
elif realmin == maxdif:
    count = maxdif+len(goto)
elif realmin ==simpledif:
    count =