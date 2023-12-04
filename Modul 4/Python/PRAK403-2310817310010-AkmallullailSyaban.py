angka = input().split()
a, b = map(int, angka)

if a > b:
    print(f"{a} {b} ", end="")
    for i in range(1, a-b+1):
        print(f"- {a-i} {b+i} ", end="")

elif a < b:
    print(f"{a} {b} ", end="")
    for i in range(1, b-a+1):
        print(f"- {a+i} {b-i} ", end="")