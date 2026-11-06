suhu = [-3, 5, 0, -12, 8, 15, -1, 22]

# 1. Cari apakah nilai 0 ada di dalam data
if 0 in suhu:
    posisi = suhu.index(0)
    print("Nilai 0 ditemukan pada index:", posisi)
else:
    print("Nilai 0 tidak ditemukan")

# 2. Filter hanya nilai suhu positif (> 0)
suhu_positif = [x for x in suhu if x > 0]
print("Suhu positif:", suhu_positif)