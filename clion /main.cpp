#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    double rez, a, z, b, x;
    string f;
    cout << "Введите a:";
    while (!(cin >> a ) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "ошибка"<<endl;
    }
    cout << "Введите b:";
    while (!(cin >> b) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "ошибка" << endl;
    }
    cout << "Введите z:";
    while (!(cin >> z) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "ошибка" << endl;
    }

    if(z<1) x = pow(z,3) + 0.2;
    else x = z + log(z);
    rez = 2*a*pow(cos(x*x),3)+pow(sin(pow(x,3)),2);
    int i;
    cout << "Выберите f(x)=2x,x^3,x/3" << endl;
    cin >> f;
    if (f == "2x") i = 1;
    if (f == "x^3") i = 2;
    if (f == "x/3") i = 3;


    switch (i)
    {
        case 1:
            rez = rez - b*2*x;
            break;
        case 2:
            rez = rez - b*pow(x,3);
            break;
        case 3:
            rez = rez - b*x/3;
            break;
        default:
            cerr << "invalid" << endl;
            break;
    }

    cout << rez << endl;

    return 0;
}
