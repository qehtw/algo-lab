#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Функція для підрахунку символів в рядку
int countChar(const char* str, char c) {
    int count = 0;
    while (*str) {
        if (*str == c) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    // 1. Масив з 3-х покажчиків на рядки з прізвищем, ім'ям та по батькові
    const char* person[] = {"Ivanov", "Ivan", "Ivanovich"};
    printf("Surname: %s\nName: %s\nPatronymic: %s\n", person[0], person[1], person[2]);
    int oCount = countChar(person[0], 'o');
    printf("Number of 'o' in surname: %d\n\n", oCount);

    // 2. Масив з 3-х покажчиків на рядки з назвами країни, міста та вулиці
    const char* address[] = {"Ukraine", "Kyiv", "Shevchenka street"};
    printf("Country: %s\nCity: %s\nStreet: %s\n", address[0], address[1], address[2]);
    int aCount = countChar(address[2], 'a');
    printf("Number of 'a' in street name: %d\n\n", aCount);

    // 3. Масив з 3-х покажчиків на рядки з назвами університету, факультету, спеціальності
    const char* education[] = {"Kyiv University", "Physics Faculty", "Engineering"};
    printf("University: %s\nFaculty: %s\nSpecialty: %s\n", education[0], education[1], education[2]);
    int eCount = countChar(education[2], 'e');
    printf("Number of 'e' in specialty: %d\n\n", eCount);

    // 4. Масив з 3-х покажчиків на рядки з назвами континенту, країни та столиці цієї країни
    const char* geo[] = {"Europe", "France", "Paris"};
    printf("Continent: %s\nCountry: %s\nCapital: %s\n", geo[0], geo[1], geo[2]);
    int oCountGeo = countChar(geo[2], 'o');
    printf("Number of 'o' in capital: %d\n\n", oCountGeo);

    // 5. Масив з 3-х покажчиків на рядки з назвами книги, глави та параграфа
    const char* book[] = {"War and Peace", "Chapter Two", "Paragraph 1"};
    printf("Book: %s\nChapter: %s\nParagraph: %s\n", book[0], book[1], book[2]);
    int cCount = countChar(book[1], 'c');
    printf("Number of 'c' in chapter: %d\n\n", cCount);

    system("pause");
    return 0;
}
