#include<iostream>
using namespace std;

int main() {
    int x =10;
    cout << "x = " << x << endl;
    cout <<"&x = " << &x << endl;
    int *p = &x;
    cout << "p = " << p << endl;
    *p += 10; 
    cout << "*p = " << *p << endl;

    int w = 10;
    int &q = w;
    cout << "w = " << w << endl;
    cout << "q = " << q << endl;
    q++;
    cout << "q = " << q << endl;

    char c = 'A';
    char *pc = &c;
    cout << "c = " << c << endl;
    
    cout << "pc without = " << &pc << endl;

    int n =10;
    n= n++;// This line has no effect on n as n++ returns the value before incrementing.
    cout << "n = " << n << endl;

    
}