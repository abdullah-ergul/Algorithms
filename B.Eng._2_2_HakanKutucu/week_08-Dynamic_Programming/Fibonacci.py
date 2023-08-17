memo = []

def fib (n):
    if n <= 2:
        f = 1
    elif memo[n-1] != 0:
        print("*" + str(memo[n-1]) + "* - ", end=" ")  # testing row "*%d* - 
        return memo[n-1]
    else:
        f = fib(n-1) + fib(n-2)

    memo[n-1] = f
    return f



n = int(input("n = "))
while(n != -1):
    memo = [0]*n

    if (n > 2):
        memo[0] = 1
        memo[1] = 1
        
    print(" -- {}'th number: {}\n".format(n, fib(n)))

    for i in range(n):              # testing row
        print(memo[i], end=" ");    # testing row
    print("\n")                     # testing row
    n = int(input("n = "))
