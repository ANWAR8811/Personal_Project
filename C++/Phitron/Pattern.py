def main():
    n = int(input())

    # Upper half of the pattern
    for r in range(1, n + 1):
        for c in range(1, n - r + 1):
            print(" ", end="")
        
        if r % 2 != 0:
            for c in range(1, 2 * r):
                print("#", end="")
        else:
            for c in range(1, 2 * r):
                print("-", end="")
        
        print()

    # Lower half of the pattern
    for r in range(n - 1, 0, -1):
        for c in range(1, n - r + 1):
            print(" ", end="")
        
        if r % 2 != 0:
            for c in range(1, 2 * r):
                print("#", end="")
        else:
            for c in range(1, 2 * r):
                print("-", end="")
        
        print()

if __name__ == "__main__":
    main()
