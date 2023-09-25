def bfs(graph, start_node, end_point):
    visit = list()
    queue = list()
    count = 0
    loop_count = 0
    for_loop_count = 1
    istrue = 0
    queue.append(start_node)

    while queue:
        loop_count += 1
        # print("loopcount:",loop_count)
        # print(queue)
        node = queue.pop(0)
        if node not in visit:
            visit.append(node)

            # count += 1 카운트 여기다가 넣으면 안댐... 다음 노드로 바뀔때 넣어야댐 ㅇㅅㅇ
            if node == [end_point[0], end_point[1]]:
                istrue = 1
                break

            if 0 <= (node[0] - 2) <= graph and 0 <= (node[1] - 1) <= graph:
                queue.append([node[0] - 2, node[1] - 1])
            if 0 <= (node[0] - 2) <= graph and 0 <= (node[1] + 1) <= graph:
                queue.append([node[0] - 2, node[1] + 1])
            if 0 <= (node[1] - 2) <= graph:
                queue.append([node[0], node[1] - 2])
            if 0 <= (node[1] + 2) <= graph:
                queue.append([node[0], node[1] + 2])
            if 0 <= (node[0] + 2) <= graph and 0 <= (node[1] - 1) <= graph:
                queue.append([node[0] + 2, node[1] - 1])
            if 0 <= (node[0] + 2) <= graph and 0 <= (node[1] + 1) <= graph:
                queue.append([node[0] + 2, node[1] + 1])

        if for_loop_count == loop_count:
            count += 1
            for_loop_count = loop_count+len(queue)
            # print("for_loop_count",for_loop_count)

    if istrue == 0:
        count = -1
    # print("visit", visit)
    return count


plate = int(input())
knight = list(map(int, input().split()))

print(bfs(plate, [knight[0], knight[1]], [knight[2], knight[3]]))
