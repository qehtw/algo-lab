#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    
    // Перша функція: F = a^2 + b^2
    printf("F = a^2 + b^2\n");
    for(a = 4; a <= 20; a += 2) {
        for(b = 3; b <= 21; b += 3) {
            int F = a * a + b * b;
            printf("a = %d, b = %d, F = %d\n", a, b, F);
        }
        printf("\n");
    }

    // Друга функція: F = a^2 - 4b
    printf("F = a^2 - 4b\n");
    for(a = 2; a <= 10; a++) {
        for(b = 5; b <= 20; b += 5) {
            int F = a * a - 4 * b;
            printf("a = %d, b = %d, F = %d\n", a, b, F);
        }
        printf("\n");
    }

    // Третя функція: F = a^2 - b^2
    printf("F = a^2 - b^2\n");
    for(a = 0; a <= 40; a += 4) {
        for(b = 6; b <= 20; b += 2) {
            int F = a * a - b * b;
            printf("a = %d, b = %d, F = %d\n", a, b, F);
        }
        printf("\n");
    }

    // Четверта функція: F = 2a^2 + b
    printf("F = 2a^2 + b\n");
    for(a = 3; a <= 30; a += 3) {
        for(b = 8; b <= 20; b += 4) {
            int F = 2 * a * a + b;
            printf("a = %d, b = %d, F = %d\n", a, b, F);
        }
        printf("\n");
    }

    // П'ята функція: F = 5a + b^2
    printf("F = 5a + b^2\n");
    for(a = 5; a <= 50; a += 5) {
        for(b = 4; b <= 10; b += 2) {
            int F = 5 * a + b * b;
            printf("a = %d, b = %d, F = %d\n", a, b, F);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
