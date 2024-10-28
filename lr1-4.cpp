#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double z1, z2, b, a;
    std::cout << "Введите a \n";
    std::cin >> a;
    std::cout << "Введите b \n";
    std::cin >> b;
    z1 = (sin(a) + cos((2 * b - a))) / (cos(a) - sin(2 * b - a));
    z2 = (1 + sin(2 * b)) / (cos(2 * b));
    std::cout << " z1 =" << z1 << " ; z2 = " << z2;
    return 0;
}
