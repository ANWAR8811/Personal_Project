# SEJ Ma'am

def memo_fib(n, arr):
  arr[0] = 0
  arr[1] = 1
  if n<2:
    return n
  else:
    if arr[n] == -1:
      arr[n] = memo_fib(n-1, arr) + memo_fib(n-2, arr)
    return arr[n]

n = int(input())
print(memo_fib(n, [-1]*(n+1)))