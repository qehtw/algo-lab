#include <iostream>
#include <cstdlib>
#include <ctime>

const int N = 5; // Розмір матриці N x N

// Функція для заповнення матриці випадковими числами
void fillMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = rand() % 100; // Випадкові числа від 0 до 99
        }
    }
}

// Функція для виведення матриці на екран
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

// Функція для пошуку мінімального елемента в рядку
int findMinInRow(int matrix[N][N], int row) {
    int min = matrix[row][0];
    for (int j = 1; j < N; ++j) {
        if (matrix[row][j] < min) {
            min = matrix[row][j];
        }
    }
    return min;
}

// Функція для циклічного зсуву елементів рядка вліво
void cyclicShiftLeft(int matrix[N][N], int row, int shift) {
    int temp[N];
    for (int i = 0; i < N; ++i) {
        temp[i] = matrix[row][(i + shift) % N];
    }
    for (int i = 0; i < N; ++i) {
        matrix[row][i] = temp[i];
    }
}

int main() {
    srand(time(0)); // Ініціалізація генератора випадкових чисел

    int matrix[N][N];

    // Заповнення матриці випадковими числами
    fillMatrix(matrix);

    // Виведення вихідної матриці
    std::cout << "Initial matrix:" << std::endl;
    printMatrix(matrix);

    int row;
    std::cout << "Enter row number (0 to " << N-1 << "): ";
    std::cin >> row;

    // Перевірка правильності введення
    if (row < 0 || row >= N) {
        std::cerr << "Invalid row number!" << std::endl;
        return 1;
    }

    // Пошук мінімального елемента в рядку
    int minElement = findMinInRow(matrix, row);
    std::cout << "Minimum element in row " << row << ": " << minElement << std::endl;

    // Зсув елементів рядка циклічно вліво на кількість елементів, рівну мінімальному елементу рядка
    cyclicShiftLeft(matrix, row, minElement);

    // Виведення отриманої матриці
    std::cout << "Matrix after cyclic shift:" << std::endl;
    printMatrix(matrix);

    return 0;
}
