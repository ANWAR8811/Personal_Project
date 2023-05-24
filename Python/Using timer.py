## Using timer

from timeit import default_timer as timer

start = timer()
a = [i*i for i in range(1_000_000)]
end = timer()
print(end - start)