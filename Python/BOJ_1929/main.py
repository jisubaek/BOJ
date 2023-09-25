m, n = map(int, input().split())
list = []
for i in range(0,n+1):
    list.append(i)
for i in range(2,int(n**(1/2))+1):
    if list[i] == 0:
        continue
    else:

        for z in range(2,int(n/i)+2):
            if i*z <= n:
                list[i*z] = 0
finallist=[]
for i in range(m,n+1):
    if list[i]!=0:
        if list[i]!=1:
            finallist.append(i)

for i in finallist:
    print(i)
