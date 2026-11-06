#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nilai_siswa = {60, 85, 40, 90, 75, 50, 95};

    auto it = std::find(nilai_siswa.begin(), nilai_siswa.end(), 85);
    if (it != nilai_siswa.end()) {
        int posisi_85 = std::distance(nilai_siswa.begin(), it);
        std::cout << "Index nilai 85 adalah: " << posisi_85 << std::endl;
    } else {
        std::cout << "data tidak ditemukan" << std::endl;
    }
    std::vector<int> hasil_filter;
    for (int x : nilai_siswa) {
        if (x >= 75) {
            hasil_filter.push_back(x);
        }
    }

    std::cout << "Nilai lulus: [";
    for (size_t i = 0; i < hasil_filter.size(); ++i) {
        std::cout << hasil_filter[i] << (i < hasil_filter.size() - 1 ? ", " : "");
    }
    std::cout << "]" << std::endl;

    return 0;
}