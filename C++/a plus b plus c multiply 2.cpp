#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double q;
    double w;
    double e;

    cout << "Введите первое число: \n";
    cin >> q;

    cout << "Введите второе число: \n";
    cin >> w;

    cout << "Введите третье число: \n";
    cin >> e;

    double r = (q + w + e) * 2;
    
    cout << "(" q + " + " + w + " + " + e ")" " * 2" = r << endl
}