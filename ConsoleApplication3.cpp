#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    int year;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "������ ��";
    cin >> year;

    if (year % 4 == 0) {
        cout << "�� ���������� ��";
    }
    else
    {
        cout << "��� �� �� ����������";
    }
}
