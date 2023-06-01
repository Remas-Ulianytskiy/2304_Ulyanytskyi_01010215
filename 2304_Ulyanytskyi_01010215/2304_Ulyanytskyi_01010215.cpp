#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    const float verst_in_km = 1.067;
    float user_value = NULL;

    cout << "¬вед≥ть в≥дстань у верстах: ";
    cin >> user_value;

    cout << user_value << " верст в к≥лометрах: ";
    cout << std::setprecision(4) << user_value * verst_in_km;
}
