a, b = map(int, input().split())

if (a < b):
    i = a
    while (i < b):
        print(f"{i} {a + b - i} - ", end="")
        i += 1
elif (a > b):
    i = a
    while (i > b):
        print(f"{i} {a + b - i} - ", end="")
        i -= 1

print(f"{b} {a}")