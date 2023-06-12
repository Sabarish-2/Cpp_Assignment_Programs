#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    
    cout << "Enter 10 Numbers :" << endl;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << "\nEnter the Number to be  Searched : ";
    int search, found = 0;
    cin >> search;
    
    for (int i = 0; i < n; i++)
    {
        if(search == a[i]) {
            cout << "Found element at Position : " << (i + 1) << endl;
            found ++;
        }
    }
    
    if (found == 0) {
        cout << "Element " << search <<" Not found!";
    }
    
    return 0;
}