str1 = input()
str2 = input()

if len(str1) != len(str2):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    pagar = 0
    asterik = 0
    for i in range(len(str1)):
        if str1[i] == " " and str2[i] == " ":
            print(" ", end="")
        elif str1[i] != str2[i]:
            print("#", end="")
            pagar += 1
        else:
            print("*", end="")
            asterik += 1
    print(f"\n* = {asterik}")
    print(f"# = {pagar}")
    if asterik >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")