#include <iostream>

using namespace std;

int main (){
	int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    cout << a + c << endl;
    cout << x + c << endl;
    cout << dx + x << endl;
    cout << ((int) dx) + ax << endl;
    cout << a + x << endl;
    cout << s + b << endl;
    cout << ax + b << endl;
    cout << s + c << endl;
    cout << ax + c << endl;
    cout << ax + ux <<endl;
    return 0;
}