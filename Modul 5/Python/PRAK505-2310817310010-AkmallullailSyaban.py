def biodata(tahun, namaku, asal):
    tahun_sekarang = 2020

    print(f"\nPerkenalkan Nama Saya : {namaku}")
    print(f"Umur Saya : {tahun_sekarang - tahun}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya Dari : {asal}")

tahunlahir = int(input())
namaku = input()
asal = input()
biodata(tahunlahir, namaku, asal)