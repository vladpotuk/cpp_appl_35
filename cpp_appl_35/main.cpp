#include <iostream>
#include<Windows.h>
//�������� �������, ��� ������� � ����� ������ �� ������� �������.
void deleteCharAtIndex(char* str, int index) {
    system("chcp 1251");
    system("cls");
    if (index < 0) {
        std::cerr << "����� ������� ������� ���� �� ��'�����." << std::endl;
        return;
    }

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    if (index >= length) {
        std::cerr << "����� ������� �������� ������� �����." << std::endl;
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

    std::cout << "������ �����: ";
    std::cin.getline(inputString, MAX_LENGTH);

    int index;
    std::cout << "������ ����� ������� ��� ���������, ������� ���������� � 0 : ";
    std::cin >> index;

    deleteCharAtIndex(inputString, index);

    std::cout << "���������: " << inputString << std::endl;

    return 0;
}
