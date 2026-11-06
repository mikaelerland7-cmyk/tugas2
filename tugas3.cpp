#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    // 1. Cari apakah nilai 0 ada di dalam data
    auto it = std::find(suhu.begin(), suhu.end(), 0);
    if (it != suhu.end()) {
        int posisi = std::distance(suhu.begin(), it);
        std::cout << "Nilai 0 ditemukan pada index: " << posisi << std::endl;
    } else {
        std::cout << "Nilai 0 tidak ditemukan" << std::endl;
    }

    // 2. Filter hanya nilai suhu positif (> 0)
    std::vector<int> suhu_positif;
    for (int x : suhu) {
        if (x > 0) {
            suhu_positif.push_back(x);
        }
    }

    // Cetak hasil filter
    std::cout << "Suhu positif: [";
    for (size_t i = 0; i < suhu_positif.size(); ++i) {
        std::cout << suhu_positif[i] << (i < suhu_positif.size() - 1 ? ", " : "");
    }
    std::cout << "]" << std::endl;

    return 0;
}