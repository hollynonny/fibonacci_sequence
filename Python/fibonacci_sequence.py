n = int(input("Type the length of the array: "))

if n < 0:
    print("The length can't be negative!")
    quit()

pole = [0] * n

if n <= 1:
    print("F(1) -> 0")
    quit()

pole[1] = 1

if n > 1:
    for i in range(2, n):
        pole[i] = pole[i - 2] + pole[i - 1]

for i in range(n):
    print(f"F({i+1}) -> {pole[i]}")