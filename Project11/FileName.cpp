#include <iostream>

const int SIZE = 3;

int main() {
    int matrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    int mainDiagSum = 0;
    int secDiagSum = 0;

    for (int i = 0; i < SIZE; i++) {
        mainDiagSum += matrix[i][i];
        secDiagSum += matrix[i][SIZE - 1 - i];
    }

    std::cout << "Sum of elements on the main diagonal: " << mainDiagSum << std::endl;
    std::cout << "Sum of elements on the secondary diagonal: " << secDiagSum << std::endl;

    return 0;
}