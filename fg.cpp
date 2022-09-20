#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,x;
	a = 23;
	b = 24;
	c = 25;
	char vb;
		cin >> a,b,c;
		cout << "Vibor form:";
		cin >> vb;
		
		
	switch (vb)
	{
	case '1':
		cout << "2x" << endl;
		break;
	case '2':
		cout << pow(2,x) << endl;
		break;
	case '3':
		cout << "" << endl;
		break;	
	default:
	cerr << "invalid" << endl;
		break;
	}	

}  