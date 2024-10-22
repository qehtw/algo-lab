#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[7] = {201};  // Перший елемент масиву - 201
    int *px = arr;

    // Введення елементів масиву
    for (int i = 1; i < 7; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", px + i);
    }

    // Знаходження мінімального непарного елемента
    int minOdd = 0;
    for (int i = 0; i < 7; i++) {
        if (*(px + i) % 2 != 0) {
            if (minOdd == 0 || *(px + i) < minOdd) {
                minOdd = *(px + i);
            }
        }
    }

    if (minOdd != 0) {
        printf("Minimum odd element: %d\n", minOdd);
    } else {
        printf("No odd element found\n");
    }

    system("pause");
    return 0;
}
