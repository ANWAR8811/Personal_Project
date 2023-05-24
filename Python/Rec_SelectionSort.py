def recSelection(a, r, c=0, maxi=0):
  if r == 0:
    return
  if c < r:
    if a[c] > a[maxi]:
      recSelection(a, r, c+1, c)
    else:
      recSelection(a, r, c+1, maxi)
  else:
    a[maxi], a[r-1] = a[r-1], a[maxi]
    recSelection(a, r-1)

# a = [4,2,1,5,3]
a = [3,1,2]
recSelection(a, len(a))
print(a)