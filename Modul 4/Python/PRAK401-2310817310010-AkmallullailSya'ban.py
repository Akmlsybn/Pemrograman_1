print("Input :")
angka, tanda = input().split()
angka = int(angka)
print("Output :")

for i in range(1,51):
    if i % angka == 0:
        print(tanda, end=" ")
    else:
        print(i, end=" ")