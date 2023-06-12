#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "\nEnter the Value of X Squared : ";
    int a;
    cin >> a;
    
    cout << "Enter the Value of X : ";
    int b;
    cin >> b;
    
    cout << "Enter the Value of Number : ";
    int c;
    cin >> c;


    float determinant = (b * b) - (4 * a * c), x1, x2;

    if (determinant > 0)
    {
        // Real and Distinct;
        x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a); 
        x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a); 
        cout << "\nValues of X : " << x1 << ", " << x2;
    } else if (determinant == 0)
    {
        // Same
        x1 = -b / (2 * a); 
        cout << "\nValue of X : " << x1;
    } else
    {
        // Imaginary Roots
        cout << "\nImaginary Roots";
    }

    return 0;
}