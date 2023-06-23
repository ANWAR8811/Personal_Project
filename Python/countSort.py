import numpy as np


def count_sort(arr):
    max_element = max(arr)
    count = np.zeros(max_element+1, dtype=int)
    for element in arr:
        count[element] += 1
    for i in range(1, len(count)):
        count[i] += count[i-1]  # Adjust indexing here
    output = np.zeros(len(arr), dtype=int)
    for num in reversed(arr):  # Iterate in reverse order
        output[count[num]-1] = num  # Adjust indexing here
        count[num] -= 1
    return output


data = [1, 7, 4, 1, 10, 9, -2]
print(count_sort(data))


# import numpy as np


# def count_sort(arr):
#     min_element = min(arr)
#     max_element = max(arr)
#     count = np.zeros(max_element-min_element+1, dtype=int)
#     for element in arr:
#         count[element-min_element] += 1
#     for i in range(1, len(count)):
#         count[i] += count[i-1]
#     output = []
#     for num in arr:
#         output.append(num)
#         count[num-min_element] -= 1
#     return output


# data = [1, 7, 4, 1, 10, 9, -2]
# sorted_data = count_sort(data)
# print(' '.join(map(str, sorted_data)))
