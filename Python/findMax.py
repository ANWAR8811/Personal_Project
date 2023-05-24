def findMax(a,i,max):
  if i == len(a):
    return max
  else:
    if max<a[i]:
      max = a[i]
      return findMax(a,i+1,max)
    else:
      return findMax(a,i+1,max)

a = [2, 16,  8, 1, 10]
i = 0
max = 0
x = findMax(a,i,max)
print(x)