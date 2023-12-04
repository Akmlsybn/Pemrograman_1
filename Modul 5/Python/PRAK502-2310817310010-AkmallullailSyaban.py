def hitung(nilai1, nilai2):
    hitung = nilai1 - nilai2
    if hitung < 0:
        hitung = hitung * -1
    return hitung

def mutlak(nilai):
    return abs(nilai)

a, c, b, d = map(int, input().split())

hasil = hitung(a, b)+hitung(c, d)
hasil_mutlak = mutlak(hasil)
print(hasil_mutlak)