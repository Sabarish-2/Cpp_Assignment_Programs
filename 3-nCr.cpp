#include <iostream>

using namespace std;

int fact(int n) {
    int nFact = 1;
    for (int i = 1; i <= n; i++)
        nFact = nFact * i;

    return nFact;
}

int main()
{    
    cout << "To find nCr" << endl ;
    
    cout << "n : ";
    int n;
    cin >> n;

    cout << "r : ";
    int r;
    cin >> r;

    int nFact = fact(n), rFact = fact(r), nrFact =  fact(n - r);

    float nCr = nFact / (rFact * nrFact);

    cout << n << "C" << r << " is " << nCr;

    return 0;
}