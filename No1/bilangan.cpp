#include <iostream>

int main() {
    int N;
    
    std::cout << "Masukkan N: ";
    std::cin >> N;

    int* angka = new int[N];
    
    for (int i = 0; i < N; ++i) {
        std::cout << "Masukkan bilangan ke " << i+1 << " : ";
        std::cin >> angka[i];
    }

    bool beda = true;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (angka[i] == angka[j]) {
                beda = false;
                break;
            }
        }
        if (!beda) {
            break;
        }
    }

    if (beda) {
        std::cout << "Berbeda semua\n";
    } else {
        std::cout << "Tidak berbeda semua\n";
    }

    delete[] angka;

    return 0;
}