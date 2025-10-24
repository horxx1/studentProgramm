/// Variant 1
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int x;
    int y;
    int c;
    int d;

    cout << "Введите первое число(x): ";
    cin >> x;

    cout << "Введите второе число(y): ";
    cin >> y;

    cout << "Введите третье число(c): ";
    cin >> c;

    cout << "Введите четвёртое число(d): ";
    cin >> d;

    int e;

    if (x * y > 3) {
        int dlyaUsloviya1 = pow(log10(x * y), (c * d));
        int uslovie1 = pow(x, 3);

        if  (uslovie1 < dlyaUsloviya1) {
            uslovie1 = dlyaUsloviya1;
        }
        
        e = uslovie1;
    }
     
    if (0 <= (x * y) <= 3) {
        int dlyaUsloviya2 = c * x;
        
        if (dlyaUsloviya2 < d * y) {
            dlyaUsloviya2 = d * y;
        }

        int uslovie2 = x;
        
        if (uslovie2 > y) {
            uslovie2 = y;
        }

        if (uslovie2 > dlyaUsloviya2) {
            uslovie2 = dlyaUsloviya2;
        }

        e = uslovie2;
    }

    if (x * y < 0) {
        e = pow(2, c * d) - x;
    }

    cout << "Ответ: " << e;
}
