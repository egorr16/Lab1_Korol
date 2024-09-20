#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    int year;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "¬вед≥ть р≥к";
    cin >> year;

    if (year % 4 == 0) {
        cout << "÷е високосний р≥к";
    }
    else
    {
        cout << "÷ей р≥к не високосний";
    }
}
