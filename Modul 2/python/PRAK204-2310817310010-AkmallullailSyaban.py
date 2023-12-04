angka = input().split()
pi = 22/7
volume = pi * float(angka[0]) * float(angka[0]) * float(angka[1])
luas = 2 * pi * float(angka[0]) * (float(angka[0]) + float(angka[1]))
keliling = 2 * pi * float(angka[0])

print(f"Volume   = {volume:.2f}")
print(f"Luas     = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")