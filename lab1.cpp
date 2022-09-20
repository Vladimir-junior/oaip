#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double x,y,z,s,a,b;
cout << "Введите x:";

cin >> x;
cout << "Введите y:";
cin >> y;
cout << "Введите z:";
cin >> z;
    a = pow(abs(cos(x)-cos(y)),1 + 2*pow(sin(y),2));
    b = (1 + z + (pow(z,2)/2) + (pow(z,3)/3) + (pow(z,4)/4));
    s = a*b;
cout <<"Результат s=" << s <<endl;
    return 0;

