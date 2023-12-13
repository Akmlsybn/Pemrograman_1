n1, n2 = map(int, input().split())
hasil = []
if n1 != n2:
    print("Jumlah Tidak Sama")
else:
    scan1 = list(map(int, input().split()))
    scan2 = list(map(int, input().split()))

    for i in range(n1):
        a = scan1[i] * scan2[i]
        hasil.append(a)
        print(hasil[i], end=" ")