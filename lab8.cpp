#include <stdio.h>
#include <ctype.h>

// Функція для підрахунку кількості слів
int num_word(char *s) {
    int count = 0;
    int in_word = 0; // Прапор, що вказує на те, чи знаходимося ми в середині слова

    // Проходимо по кожному символу рядка
    while (*s) {
        if (isspace(*s)) { // Якщо символ - пробіл або інший роздільник
            in_word = 0;  // Ми вийшли з слова
        } else if (!in_word) {
            in_word = 1;  // Знайшли нове слово
            count++;      // Збільшуємо лічильник слів
        }
        s++;  // Переходимо до наступного символу
    }

    return count;  // Повертаємо кількість слів
}

int main() {
    char input[100];  // Масив для збереження вводу користувача

    // Введення рядка
    printf("Input text: ");
    fgets(input, sizeof(input), stdin);  // Використовуємо fgets для введення рядка з пробілами

    // Викликаємо функцію для підрахунку слів
    int word_count = num_word(input);

    // Виводимо результат
    printf("Number of words: %d\n", word_count);

    return 0;
}
