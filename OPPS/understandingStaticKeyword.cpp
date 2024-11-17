#include <bits/stdc++.h>
using namespace std;
void print()
{
    int b = 10;
    cout << b << endl;
    b++;
}
void printStatic()
{
    static int b = 10; // now b remain static ek baar stating m jo ban gya vhi rhegaa baar baar function call m fir se intialise nhi hoga.
    cout << b << endl;
    b++;
}
int main()
{
    print();
    print();
    print();
    cout << "Use of Static Keyword now!:::::->" << endl;
    printStatic();
    printStatic();
    printStatic();
}