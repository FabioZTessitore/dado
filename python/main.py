# main.py

# lancia un dado a N facce (N > 1)

import dado

print("Lancia un dado a N facce")

N = 0
while N <= 1:
    N = input("N = ")
    N = int(N)

print("Estraggo ... %d" % (dado.lancia(N),))
