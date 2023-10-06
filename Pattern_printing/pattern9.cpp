/*
Print the following pattern
Input : n = 4
Output :
      A       | - - -       A       |      
    A B    => | - -     +   A B     |
  A B C       | -           A B C   |
A B C D       | -           A B C D |
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    for(int i=1;i<=n;i++)                      
    {
       for(int j=1;j<=n-i;j++)
      {   
            cout<<" "<<" ";      
      }
      for(int k=1;k<=i;k++)
      {   
            cout<<(char)(k+64)<<" ";      
      }
     cout<<endl;
    }
    return 0;
}