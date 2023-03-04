# fibonacci series

def fib(n):
    a, b = 0, 1
    for i in range(n):
        print(a, end='\n')
        a, b = b, a+b
    print()


fib(20)

# fibonacci series from 0 to 100


def fib2(n):
    a, b = 0, 1
    for i in range(n):
        if a > n:
            break
        print(a, end=' ')
        a, b = b, a+b
    print()


fib2(100)
