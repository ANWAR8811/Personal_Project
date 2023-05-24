# list task-2

nol = int(input('Number of lists: '))
# l = []
# sum = 0
max_sum =0
new_l = []
for i in range(nol)2
  noe = int(input(f'Elements number of No.{i+1} list: '))
  l = []
  sum = 0
  for j in range(noe):
    ip = int(input(f"Element no.{j+1}: "))
    sum += ip
    l.append(ip)
  print(f"Number {i+1} lsit = {l}")
  print(f"Summation of no.{i+1} lsit = {sum}")
  #l = []

  if sum>max_sum:
    max_sum = sum
    new_l = l.copy()

print(max_sum)
print(new_l)