#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};

    // 1. Cari apakah "Keyboard" ada di dalam daftar
    auto it = std::find(produk.begin(), produk.end(), "Keyboard");
    if (it != produk.end()) {
        int posisi = std::distance(produk.begin(), it);
        std::cout << "Produk 'Keyboard' ditemukan pada index: " << posisi << std::endl;
    } else {
        std::cout << "Produk tidak ditemukan" << std::endl;
    }

    // 2. Filter produk dengan panjang nama > 5 karakter (x.length() > 5)
    std::vector<std::string> hasil_filter;
    for (const std::string& x : produk) {
        if (x.length() > 5) {
            hasil_filter.push_back(x);
        }
    }

    // Cetak hasil filter
    std::cout << "Produk dengan nama > 5 karakter: [";
    for (size_t i = 0; i < hasil_filter.size(); ++i) {
        std::cout << "\"" << hasil_filter[i] << "\"" << (i < hasil_filter.size() - 1 ? ", " : "");
    }
    std::cout << "]" << std::endl;

    return 0;
}