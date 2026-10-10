n, m = map(int, input().split())
x, y, d = map(int, input().split())
board = [list(map(int, input().split())) for _ in range(n)]

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

ans = 1
board[x][y] = 2

turn_n = 0

while True:
    d = (d + 3) % 4
    nx = x + dx[d]
    ny = y + dy[d]
    turn_n += 1

    if board[nx][ny] == 0:
        x, y = nx, ny
        board[nx][ny] = 2
        ans += 1
        turn_n = 0
        continue
    else:
        if turn_n == 4:
            bx = x - dx[d]
            by = y - dy[d]

            if board[bx][by] == 1:
                break
            
            x = bx
            y = by
            turn_n = 0

print(ans)