n = int(input())
a = []
c = 0
for i in range(n):
    a.append(input())
    x = len(a[i])
    if (c < x): c = x

for j in range(n):
    m = len(a[j][1:])
    
    if (m == 1):
        p = a[j] + 'a'
    elif (m % 2 == 0):
        p = a[j]
    else:
        p = a[j][:-1]
    s = (c - len(p))//2
    print(s*" "+ p)