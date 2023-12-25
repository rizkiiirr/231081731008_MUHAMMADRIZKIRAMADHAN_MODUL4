a = int(input(" "))

for b in range (1, a + 1) :
    if (b % 2 == 1) : print(f"{b}", end= " ")
print()
for b in range (a, 1, -1) :
   if (b % 2 == 0) : print(f"{b}", end= " ")