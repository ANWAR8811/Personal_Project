# Debugging a Simple Program

def addition(a, b):
    result = a + b
    return result

def multiplication(a, b):
    result = a * b
    return result

def division(a, b):
    result = a / b
    return result

print(" ((5+2)X10) /2 is", division(multiplication(addition (5, 2), 10), 2))