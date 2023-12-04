angka = input().split()
a ,b, i, j, x, y = map(float,angka)
hasil = (a - b) * i / j - (x + y)

print(f"{hasil:.3f}")