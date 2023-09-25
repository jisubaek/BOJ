list = []
for i in range(1,10):
    list.append(int(input()))

i=0

finish=0

for i in range(0,10):
    for z in range(1,len(list)-i):
        if (sum(list) - list[i] - list[i+z]) == 100:
            list[i]= 0
            list[i+z] = 0
            finish=1
            break
        else: continue
    if finish==1 :
        break
list.sort()
for i in range(len(list)):
    if list[i] != 0:
        print(list[i])