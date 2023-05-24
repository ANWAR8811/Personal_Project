def build(n):
    if n>1:
        return 1+build(n-1)
    else:
        return 1

x = build(4)
print(x)
