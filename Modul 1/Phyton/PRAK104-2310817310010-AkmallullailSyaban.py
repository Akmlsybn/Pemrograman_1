sepatuA = 400000
sepatuB = 350000
A = sepatuA-(sepatuA*13/100)
B = sepatuB-(sepatuB*21/100)
A_round = round(A)
B_round = round(B)
print(f"Harga sepatu A adalah {sepatuA}")
print(f"Harga sepatu B adalah {sepatuB}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {A_round}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {B_round}")