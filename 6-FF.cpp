#include <iostream>

using namespace std;

class Complex{
    protected:
        int num1, num2;
    friend Complex Sum(Complex obj1, Complex obj2);

    public:
        void Input(){
            cout<<"\nEnter the Real Number : ";
            cin>>num1;
            cout<<"Enter the Imaginary Number : ";
            cin>>num2;
        }

        void Print(){
            cout<<"\nSum is "<<num1<<" + "<<num2<<"i"<<endl;
        }
};

Complex Sum(Complex obj1, Complex obj2){
    Complex obj3;
    obj3.num1 = obj1.num1 + obj2.num1;
    obj3.num2 = obj1.num2 + obj2.num2;
    return obj3;
}

int main(){
    Complex o1, o2, sum;
    cout<<"\nFor First number";
    o1.Input();
    cout<<"\nFor Second number";
    o2.Input();

    sum = Sum(o1, o2);

    sum.Print();

    return 0;
}
