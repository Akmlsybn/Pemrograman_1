jumlahruangan = int(input())
zetsu = list(map(int, input().split()))

for i in range (jumlahruangan):
    hasil = zetsu[i] * (i + 1)
    print(hasil, end=" ")