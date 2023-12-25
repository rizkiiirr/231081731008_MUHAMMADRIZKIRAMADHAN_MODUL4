a, b = map(int, input().split())
total1, total2 = 0, 0

for i in range(1, a + 1):
    total = i * b
    total1 += total

    if i == 1:
        print(f"({i} * {b}) = {total}")
    else:
        for j in range(i, 0, -1):
            print(f"({j} * {b})", end="")
            if j > 1:
                print(" + ", end="")
        print(f" = {total1}")

    total2 += total1

print(total2)

