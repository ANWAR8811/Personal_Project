#C
m = int(input())
ar1 = []
ar2 = []
for x in range(m):
    ar1.append(input())
n = int(input())
for x in range(n):
    ar2.append(input())
students = 2
for x in ar1:
	if x != "Ruhan":
	    students += 1
for x in ar2:
	if x != "Parag":
	    if x not in ar1:
	        students += 1
print(students)