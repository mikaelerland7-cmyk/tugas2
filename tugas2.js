const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

// 1. Cari apakah "Keyboard" ada di dalam daftar
const posisi = produk.indexOf("Keyboard");
if (posisi !== -1) {
    console.log("Produk 'Keyboard' ditemukan pada index:", posisi);
} else {
    console.log("Produk tidak ditemukan");
}

// 2. Filter produk dengan panjang nama > 5 karakter (x.length > 5)
const hasil_filter = produk.filter(x => x.length > 5);
console.log("Produk dengan nama > 5 karakter:", hasil_filter);