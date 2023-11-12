#include <iostream>
#include<Windows.h>
//Написати функцію, яка видаляє з рядка символ із заданим номером.
void deleteCharAtIndex(char* str, int index) {
    system("chcp 1251");
    system("cls");
    if (index < 0) {
        std::cerr << "Номер символу повинен бути не від'ємним." << std::endl;
        return;
    }

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    if (index >= length) {
        std::cerr << "Номер символу перевищує довжину рядка." << std::endl;
        return;
    }

    
    for (int i = index; i < length - 1; ++i) {
        str[i] = str[i + 1];
    }

    
    str[length - 1] = '\0';
}

int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    std::cout << "Введіть рядок: ";
    std::cin.getline(inputString, MAX_LENGTH);

    int index;
    std::cout << "Введіть номер символу для видалення, рахунок починається з 0 : ";
    std::cin >> index;

    deleteCharAtIndex(inputString, index);

    std::cout << "Результат: " << inputString << std::endl;

    return 0;
}
