import math

angka = input().split()
a, b = map(int,angka)
c = int(math.sqrt( b ** 2 - a ** 2))
keliling = int(a + b + c)
luas = int(c * a) / 2

print(f"Alas     = {c:.0f} cm")
print(f"Tinggi   = {a:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas     = {luas:.0f} cm^2")