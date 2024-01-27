#include<iostream>
using namespace std;

int main(){
    //making calculator

    //using if else
    //1 -> add, 2-> sub, 3-> mul, 4-> div

    int a = 4;
    float b=7.3;
    int op;
    cout<<"Enter operation:"<<endl;
    cin>>op;   
    //method 1 using if else method

    //methodd 2 using "Switch case approach"

    switch (op)
    {
        case 1:
            cout<<"Add: "<<endl;
            cout<<a+b<<endl;
            break;
        case 2:
            cout<<"Sub: "<<endl;
            cout<<a-b<<endl;
            break;
        case 3:
            cout<<"Mul: "<<endl;
            cout<<a*b<<endl;
            break;
        case 4:
            cout<<"Div: "<<endl;
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Invalid operation"<<endl;
            break;
    }


    return 0;
}