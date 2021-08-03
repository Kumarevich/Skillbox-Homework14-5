#include <iostream>

int main() {
    int matrix[4][4];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "Input the (" << i+1 << ", " << j+1 << ") number: ";
            std::cin >> matrix[i][j];
            if (i != j) {
                matrix[i][j] = 0;
            }
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
