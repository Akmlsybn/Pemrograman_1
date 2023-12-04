while True:
    print("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    program = int(input("Masukkan Pilihan: "))

    if program == 5:
        print("Terimakasih telah menggunakan kalkulator Akmallullail Sya'ban")
        break
    elif program == 1:
        a = float(input("Masukkan Nilai Pertama: "))
        b = float(input("Masukkan Nilai Kedua: "))
        hasil = a + b
        print(f"Hasil penjumlahan antara {a:.2f} dan {b:.2f} adalah {hasil:.2f}\n")
    elif program == 2:
        a = float(input("Masukkan Nilai Pertama: "))
        b = float(input("Masukkan Nilai Kedua: "))
        hasil = a - b
        print(f"Hasil pengurangan antara {a:.2f} dan {b:.2f} adalah {hasil:.2f}\n")
    elif program == 3:
        a = float(input("Masukkan Nilai Pertama: "))
        b = float(input("Masukkan Nilai Kedua: "))
        hasil = a * b
        print(f"Hasil perkalian antara {a:.2f} dan {b:.2f} adalah {hasil:.2f}\n")
    elif program == 4:
        a = float(input("Masukkan Nilai Pertama: "))
        b = float(input("Masukkan Nilai Kedua: "))
        hasil = a / b
        print(f"Hasil pembagian antara {a:.2f} dan {b:.2f} adalah {hasil:.2f}\n")
    else:
        print("Input anda salah, silahkan coba lagi\n")
        print("")