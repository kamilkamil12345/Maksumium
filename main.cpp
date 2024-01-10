#include <iostream>

using namespace std;

int maksimum (int &a, int &b, int &c)
{
    int x;
    if ((a>=b) && (a>=c))         x=a;
    else if ((b>=a) && (b>=c))    x=b;
    else if ((c>=b) && (c>=a))    x=c;

    return x;
}

int minimum (int &a, int &b, int &c)
{
    int y;
    if ((a<=b) && (a<=c))         y=a;
    else if ((b<=a) && (b<=c))    y=b;
    else if ((c<=b) && (c<=a))    y=c;

    return y;
}

float srednia (int &a, int &b, int &c)
{
    int z = 0;
    z = a + b + c;
    z = z/3;

    return z;
}
int main()
{
    int a,b,c;
    cout << "podaj trzy liczby" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Najwieksza z tych trzech to: " << maksimum(a,b,c) << endl;
    cout << "Najmniejsza z tych trzech to: " << minimum(a,b,c) << endl;
    cout << "Srednia z tych trzech to: " << srednia(a,b,c) << endl;

    return 0;
}
