def main():
    n, m = map(int, input().split())
    grid = []

    for _ in range(n):
        row = list(map(int, input().split()))
        grid.append(row)
    q = int(input())

    for _ in range(q):
        r, c = map(int, input().split())

        a = grid[r-1][c-1]
        b = grid[r-1][c]
        cc = grid[r-1][c+1]
        d = grid[r][c-1]
        ee = grid[r][c+1]
        f = grid[r+1][c-1]
        g = grid[r+1][c]
        hh = grid[r+1][c+1]

        grid[r-1][c] = a
        grid[r-1][c+1] = b
        grid[r-1][c-1] = d
        grid[r][c+1] = cc
        grid[r][c-1] = f
        grid[r+1][c+1] = ee
        grid[r+1][c-1] = g
        grid[r+1][c] = hh

        for row in grid:
            print(*row)
        print()

if __name__ == '__main__':
    main()