#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double f1, f2, f3, k, x, m, z, n, y1, y2, y3;
	start:
	cout << "Введите z:";
	while (!(cin >> z ) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "ошибка"<<endl;
		goto start;
	}
	
	start1:
	cout << "Введите m:";
	while (!(cin >> m) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "ошибка" << endl;
		goto start1;
	}
	start2:
	cout << "Введите k:";
	while (!(cin >> k) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "ошибка" << endl;
		goto start2;
	}
	start3:
	cout << "Введите n:";
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "ошибка" << endl;
		goto start3;
	}
	if (z > 1)
	{
		x = z;
		cout << "1 путь" << endl;
	}
	else
	{
		x = z * z + 1;
		cout << "2 путь" << endl;
	}
	f1 = 2 * x;
	f2 = x * x;
	f3 = x / 3;
	y1 = sin(n * f1) + cos(k * x) + log(fabs(m * x));
	y2 = sin(n * f2) + cos(k * x) + log(fabs(m * x));
	y3 = sin(n * f3) + cos(k * x) + log(fabs(m * x));
	cout << "1 y: " << y1 << endl;
	cout << "2 y: " << y2 << endl;
	cout << "3 y: " << y3 << endl;
	return 0;
}