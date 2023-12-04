def maxbilangan(a, b, c, d):
    max = a
    if b > max:
        max = b
    if c > max:
        max = c
    if d > max:
        max = d
    return max

a, b, c, d = map(int, input().split())
max = maxbilangan(a, b, c, d)
print(max)