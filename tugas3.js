const suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

// 1. Cari apakah nilai 0 ada di dalam data
const posisi = suhu.indexOf(0);
if (posisi !== -1) {
    console.log("Nilai 0 ditemukan pada index:", posisi);
} else {
    console.log("Nilai 0 tidak ditemukan");
}

// 2. Filter hanya nilai suhu positif (> 0)
const suhu_positif = suhu.filter(x => x > 0);
console.log("Suhu positif:", suhu_positif);