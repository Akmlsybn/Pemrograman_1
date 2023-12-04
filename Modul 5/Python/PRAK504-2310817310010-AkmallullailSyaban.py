def reverse(nilai):
    reversed = 0
    while nilai != 0:
        digit = nilai % 10
        reversed = reversed * 10 + digit
        nilai //= 10
    return reversed

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))