#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    const float verst_in_km = 1.067;
    float user_value = NULL;

    cout << "������ ������� � �������: ";
    cin >> user_value;

    cout << user_value << " ����� � ���������: ";
    cout << std::setprecision(4) << user_value * verst_in_km;
}
