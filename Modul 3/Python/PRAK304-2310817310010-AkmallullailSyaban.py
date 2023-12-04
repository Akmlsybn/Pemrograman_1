print("Input")
nilai = int(input())

if nilai == 0:
    print("Output")
    print("Nol")
elif 1 <= nilai <= 9:
    print("Output")
    print("Satuan")
elif 10 <= nilai <= 19:
    print("Output")
    print("Belasan")
elif 20 <= nilai <= 99:
    print("Output")
    print("Puluhan")
else:
    print("Output")
    print("Anda Menginput Melebihi Limit")