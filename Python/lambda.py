# Example 1: Add two numbers using a lambda function
def add_numbers(x, y): return x + y


result = add_numbers(5, 3)
print(result)  # Output: 8

# Step-by-step explanation:
# 1. The lambda keyword is used to define an anonymous function.
# 2. After lambda, we specify the function parameters (x, y in this case).
# 3. Then comes a colon (:) to separate the parameters from the function body.
# 4. The function body is a single expression that is evaluated and returned.
# 5. In this example, the lambda function adds the values of x and y and returns the result.
# 6. The lambda function is assigned to the variable add_numbers.
# 7. To use the lambda function, we call it like a regular function, passing the arguments (5 and 3).
# 8. The result of the lambda function is stored in the variable result.
# 9. Finally, we print the result, which is 8.

# Example 2: Square a number using a lambda function


def square_number(x): return x ** 2


result = square_number(4)
print(result)  # Output: 16

# Step-by-step explanation:
# 1. Another lambda function is defined, this time with a single parameter (x).
# 2. The function body squares the value of x using the ** operator (exponentiation).
# 3. The squared value is returned as the result of the lambda function.
# 4. The lambda function is assigned to the variable square_number.
# 5. We call the lambda function by passing the argument 4.
# 6. The result, which is 16, is stored in the variable result.
# 7. Finally, we print the result.

# Example 3: Sort a list of names using a lambda function
names = ['Alice', 'Bob', 'Charlie', 'David', 'Eve']
sorted_names = sorted(names, key=lambda x: len(x))
print(sorted_names)  # Output: ['Bob', 'Eve', 'Alice', 'David', 'Charlie']

# Step-by-step explanation:
# 1. This example demonstrates the use of a lambda function as the key parameter in the sorted() function.
# 2. The list names contains several names as strings.
# 3. The sorted() function is used to sort the names list based on the length of each name.
# 4. The key parameter is set to a lambda function that takes a name (x) and returns its length.
# 5. The lambda function acts as a custom sorting criterion for the sorted() function.
# 6. The sorted names are stored in the sorted_names list.
# 7. Finally, we print the sorted_names list, which shows the names sorted by length.
