l1 = [3, 2, 1]
l2 = [1, 2, 3]
el3 = []

for i in l2:
  if i in l1:
    el3.append(i)
if el3 == l2:
  print('UB jumper')
else:
  print('Not UB jumper')