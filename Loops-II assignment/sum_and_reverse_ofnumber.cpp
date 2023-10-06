// print the sum and reverse of given number
#include<iostream>
using namespace std;
int main(){
     long number;
     cout<<"enter the number:";
     cin>>number;
     int temp=number;
     int sum=0,last_digit;
     long reverse=0; 
     while(number!=0){
        last_digit=number%10;
        reverse*=10;
        reverse+=last_digit;
        sum+=last_digit;
        number/=10;
     }
     cout<<"sum of the number '"<<temp<<"' is : "<<sum<<endl;
     cout<<"reverse of the number '"<<temp<<"' is : "<<reverse<<endl;
    return 0;
}