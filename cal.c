#include <iostream>
using namespace std;
int main()
{
double a,b;
char op;
cout << "Enter the 1st number : " ;
cin >> a;
cout << "\nEnter the 2nd number : " ;
cin >> b;
cout << "\nEnter the operator : ";
cin >> op;
switch(op){
    case '+':
    cout << "\nThe result is : " << a+b;
    break;
    case '-':
    cout << "\nThe result is : " << a-b;
    break;
    case '*':
    cout << "\nThe result is : " << a*b;
    break;
    case '/':
    cout << "\nThe result is : " << a/b;
    break;
    default:
    cout<<"wrong";
}

    return 0;
}
