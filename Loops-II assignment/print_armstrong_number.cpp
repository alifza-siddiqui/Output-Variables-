// print out all Armstrong numbers between 1 and 500
// armstrong: sum of cube of each digit o fnumber is number itself 
//  ex: 153 = (1*1*1)+(5*5*5)+(3*3*3) => 153 == number itself
#include<iostream>
using namespace std;
int main(){
    int i,last_digit,cube,number;
    int temp,sum;
    cout<<"-- Armstrong numbers between 1 and 500 are given below --\n";
    for(i=1;i<=500;i++)
    {
        number=i;
        sum=0;
        temp=number;
        while(number!=0)
        {
        last_digit=number%10;
        cube=(last_digit*last_digit*last_digit);
        sum=sum+cube;
        number=number/10;
        }
        if(sum==temp) {
        cout<<temp<<endl;
        }
    }
return 0;
}