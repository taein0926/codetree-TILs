dirs = input()

dx, dy = [0, 1, 0, -1], [1, 0, -1, 0]

dir_n = 0

x, y= 0, 0

for a in dirs:
    if a == 'L':
        dir_n = (dir_n + 3) % 4
    elif a == 'R':
        dir_n = (dir_n + 1) % 4
    else:
        x += dx[dir_n]
        y += dy[dir_n]

print(x, y)
# from collections import deque


# def bfs(sr, sc):
#     q = deque()
#     q.append((sr, sc))

#     visited = [[False] * N for _ in range(N)]
#     visited[sr][sc] = True

#     while q:
#         r, c = q.popleft()

#         for dr, dc in directions:
#             nr = r + dr
#             nc = c + dc

#             if not (0 <= nr < N and 0 <= nc < N):
#                 continue

#             if visited[nr][nc]:
#                 continue

#             if board[nr][nc] == 1:  # 벽
#                 continue

#             visited[nr][nc] = True
#             q.append((nr, nc))