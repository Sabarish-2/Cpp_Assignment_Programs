#include <iostream>

using namespace std;

void avg(int a, int b)
{
    cout << "\nThe Integer Average of " << a << " and " << b << " is " << (a + b) / 2 << endl;
}

void avg(float a, float b)
{
    cout << "\nThe Floating Average of " << a << " and " << b << " is " << (a + b) / 2 << endl;
}

void avg(double a, double b)
{
    cout << "\nThe Double Average of " << a << " and " << b << " is " << (a + b) / 2 << endl;
}

int main()
{
    int a = 5, b = 10;
    float f = 8.8, g = 12.56;
    double d = 1005.5, e = 99100.9;

    avg(a, b);
    avg(f, g);
    avg(d, e);

    return 0;
}