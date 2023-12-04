print("Input")
x = int(input())

CekHari = x // 86400
detik = x % 86400

CekJam = detik // 3600
detik = detik % 3600

CekMenit = detik // 60
detik = detik % 60

print("Output")
if CekHari > 0:
    print(f"{CekHari} hari {CekJam:02}:{CekMenit:02}:{detik:02}")
else:
    print(f"{CekJam:02}:{CekMenit:02}:{detik:02}")
