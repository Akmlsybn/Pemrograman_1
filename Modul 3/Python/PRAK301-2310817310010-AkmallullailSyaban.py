print("Input")
a, b = map(int, input().split())

print("Output")
if b < a:
    print(f"{b} {a}")
else:
    print(f"{a} {b}")