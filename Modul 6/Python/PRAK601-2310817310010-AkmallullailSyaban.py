baris, kolom = map(int, input().split())
matriks = list(map(int, input().split()))

if len(matriks) == baris * kolom:
    for i in range(baris):
        for j in range(kolom):
            print(matriks[i * kolom + j], end=" ")
        print()
