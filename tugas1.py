nilai_siswa = [60, 85, 40, 90, 75, 50, 95]

if 85 in nilai_siswa:
    posisi_85 = nilai_siswa.index(85)
    print("Index nilai 85 adalah:", posisi_85)
else:
    print("data tidak ditemukan")

hasil_filter = [x for x in nilai_siswa if x >= 75]
print("Nilai lulus:", hasil_filter)