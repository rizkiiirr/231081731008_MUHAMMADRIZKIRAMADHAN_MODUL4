a, c = input( ).split()
a = int (a)
for b in range (1, 51) :
    if (b % a == 0) : print(f"{c}", end = " ")
    else : print (f"{b}", end=" ")


