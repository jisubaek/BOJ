from collections import deque

def bfs(floor, now, goal, up, down):
    q = deque()
    visit = set()
    q.append((now,0))

    while deque:
        node, count = q.popleft()

        if node not in visit:
            visit.add(node)
            if node == goal:
                return count
            if node-down>=1:
                q.append((node-down,count+1))
            if node+up<=floor:
                q.append((node+up,count+1))

        if len(q) == 0:
            return "use the stairs"






f,s,g,u,d = map(int,input().split())
print(bfs(f,s,g,u,d))

