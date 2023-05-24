# Evaluate Expression

number_list = [5, 2, 3]

def addition(array: list):
    result = 0
    for i in range(3) :
        result += array[i]
    return result
print(addition(number_list))