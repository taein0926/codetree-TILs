from collections import deque

chairs = [
    deque(map(int, input()))
    for _ in range(4)
]

k = int(input())

def c_rotate(n, d):
    pass

for _ in range(k):
    n, d = map(int, input().split())
    n -= 1
    dir = [0] * 4
    dir[n] = d

    for i in range(n, 0, -1):
        if chairs[i - 1][2] != chairs[i][6]:
            dir[i - 1] = -dir[i]
        else:
            break

    for i in range(n, 3):
        if chairs[i][2] != chairs[i + 1][6]:
            dir[i + 1] = -dir[i]
        else:
            break

    for i in range(4):
        chairs[i].rotate(dir[i])
    
print(chairs[0][0] + (chairs[1][0] * 2) + (chairs[2][0] * 4) + (chairs[3][0] * 8))