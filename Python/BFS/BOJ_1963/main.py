import copy


def Isprime(number):
    if number == 1:
        return False
    for i in range(2, int(number**1/2)+1):
        if number % i == 0:
            return False
    return True


def bfs(num1, num2):
    queue = list()
    visit = list()
    queue.append((num1, 0))

    while queue:
        # print(queue)
        number, count = queue.pop(0)
        n_list = list(map(int, str(number)))
        if number == num2:
            print(count)
            break
        if number not in visit:
            visit.append(number)
            for j in range(4):
                for z in range(10):
                    temp = copy.deepcopy(n_list)
                    temp[j] = z
                    joinnum = int(''.join(map(str, temp)))
                    if prime[joinnum] and joinnum >= 1000 and joinnum not in visit :
                        queue.append((joinnum, count+1))



prime = [False]
for i in range(1, 10000):
    prime.append(Isprime(i))


T = int(input())
for i in range(0, T):
    n1, n2 = map(int, input().split())
    bfs(n1,n2)
