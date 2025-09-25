def do_array(pole, n):
    pole[1] = 1

    for i in range(2, n):
        pole[i] = pole[i - 2] + pole[i - 1]

def print_array(pole, n):
    for i in range(n):
        print(f"F({i+1}) -> {pole[i]}")

n = int(input("Type the length of the array : "))

if n < 0:
    print("The number can't be negative!")

if n <= 1:
    print("F(1) -> 0")

pole = [0] * n
do_array(pole, n)
print_array(pole, n)