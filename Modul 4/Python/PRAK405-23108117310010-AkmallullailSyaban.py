a, b = map(int, input("Input:\n").split())
hasil1 = 0
hasil2 = 0

print("\nOutput:")
for i in range(1, a + 1):
    total = i * b
    hasil1 += total
    if i == 1:
        print(f"({i} * {b}) = {total}")
    else:
        for j in range(i, 0, -1):
            print(f"({j} * {b})", end="")
            if j > 1:
                print(" + ", end="")
        print(f" = {hasil1}")
    hasil2 += hasil1
print(hasil2)