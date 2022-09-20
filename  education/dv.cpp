#include <iostream>
using namespace std;

int main() {
    int N,a,b,c,x,f,e;
    cin >> N;
    a = N % 10;
    b = N - a;
    c = b / 10;
    x = c % 10;
    f = N / 100;
    c = a + f + x;
    cout << e << endl;
    return 0;
}