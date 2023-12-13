n = int(input())
matriksA = []
result2 = []

print("Matriks A")
for i in range(n):
    row = list(map(int, input().split()))
    matriksA.append(row)

print("Matriks B")
matriksB = []
for i in range(n):
    row = list(map(int, input().split()))
    matriksB.append(row)

for i in range(n):
    result2.append([0] * n)

for i in range(n):
    for j in range(n):
        result = 0
        for k in range(n):
            result += matriksA[i][k] * matriksB[k][j]
        result2[i][j] = result

print("Matriks AXB")
for i in range(n):
    for j in range(n):
        print(result2[i][j], end=" ")
    print()