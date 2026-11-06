const nilai_siswa = [60, 85, 40, 90, 75, 50, 95];

const posisi_85 = nilai_siswa.indexOf(85);
if (posisi_85 !== -1) {
    console.log("Index nilai 85 adalah:", posisi_85);
} else {
    console.log("data tidak ditemukan");
}
const hasil_filter = nilai_siswa.filter(x => x >= 75);
console.log("Nilai lulus:", hasil_filter);