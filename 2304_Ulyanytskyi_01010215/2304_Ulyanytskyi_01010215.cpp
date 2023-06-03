#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float verst_in_km = 1.067f;
    float user_value;

    cout << "Enter the distance in versts: ";
    cin >> user_value;

    cout << user_value << " verst in kilometers: ";
    cout << setprecision(4) << user_value * verst_in_km;

    return 0;
}
