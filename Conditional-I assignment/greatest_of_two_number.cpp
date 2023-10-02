// Take 2 integers input and print the greatest of them.
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the first number:"; cin>>num1;
    cout<<"enter the second number:"; cin>>num2;
     if(num1>num2) cout<<num1<<" is greatest";
     else cout<<num2<<" is greatest";
    return 0;
}