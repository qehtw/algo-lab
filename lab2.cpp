#include <iostream>
using namespace std;

int main() {
    char category;
    
    cout << "Choose a category by the first letter:\n";
    cout << "A - Asian Countries\n";
    cout << "R - Rivers\n";
    cout << "C - European Capitals\n";
    cout << "F - Flowers\n";
    cout << "T - Trees\n";
    cout << "Enter the first letter: ";
    cin >> category;

    switch(category) {
        case 'A':
        case 'a':
            cout << "Asian Countries:\n";
            cout << "1. China\n";
            cout << "2. Japan\n";
            cout << "3. India\n";
            cout << "4. Indonesia\n";
            cout << "5. Saudi Arabia\n";
            break;
        
        case 'R':
        case 'r':
            cout << "Rivers:\n";
            cout << "1. Amazon\n";
            cout << "2. Nile\n";
            cout << "3. Danube\n";
            cout << "4. Yenisei\n";
            cout << "5. Ganges\n";
            cout << "6. Yellow River\n";
            break;
        
        case 'C':
        case 'c':
            cout << "European Capitals:\n";
            cout << "1. Paris\n";
            cout << "2. London\n";
            cout << "3. Berlin\n";
            cout << "4. Madrid\n";
            cout << "5. Rome\n";
            cout << "6. Warsaw\n";
            cout << "7. Prague\n";
            break;
        
        case 'F':
        case 'f':
            cout << "Flowers:\n";
            cout << "1. Rose\n";
            cout << "2. Tulip\n";
            cout << "3. Lily\n";
            cout << "4. Daffodil\n";
            cout << "5. Daisy\n";
            break;
        
        case 'T':
        case 't':
            cout << "Trees:\n";
            cout << "1. Oak\n";
            cout << "2. Birch\n";
            cout << "3. Spruce\n";
            cout << "4. Pine\n";
            cout << "5. Maple\n";
            cout << "6. Poplar\n";
            break;

        default:
            cout << "Error! Unknown category. Please enter one of the letters: A, R, C, F, T.\n";
    }
    
    return 0;
}
