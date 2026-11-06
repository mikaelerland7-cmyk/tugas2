produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

# 1. Cari apakah "Keyboard" ada di dalam daftar
if "Keyboard" in produk:
    posisi = produk.index("Keyboard")
    print("Produk 'Keyboard' ditemukan pada index:", posisi)
else:
    print("Produk tidak ditemukan")

# 2. Filter produk dengan panjang nama > 5 karakter
hasil_filter = [x for x in produk if len(x) > 5]
print("Produk dengan nama > 5 karakter:", hasil_filter)