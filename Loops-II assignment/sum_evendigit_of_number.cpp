
// print the sum of even digits of a given number. ex: 4556
#include<iostream>
using namespace std;
int main(){
    int number,sum=0,last_digit;
    cout<<"Enter the number:";
    cin>>number;
    int temp=number;
    while(number!=0){
         last_digit=number%10;
         if(last_digit%2==0) sum+=last_digit;
         number/=10;
    }
    cout<<"Sum of even digits of number '"<<temp<<"' is: "<<sum;
    return 0;
}