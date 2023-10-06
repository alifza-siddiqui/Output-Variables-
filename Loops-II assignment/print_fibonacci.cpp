// print the first 'n' fibonacci numbers  1 1 2 3 5 8 13 21 34 55
#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,sum=0,n;
    cout<<"enter the n :";
    cin>>n;
    cout<<"fibonacci series:\n";
    if(n==0) cout<<" 0 "<<endl;
    else if(n==1) cout<<"1"<<endl;
    else if(n==2) cout<<" 1  1 "<<endl;
    else if(n>2)
    {
      cout<<"1  "<<"1  ";
      for(int i=3;i<=n;i++)
      {
        cout<<(sum=a+b)<<"  ";
        a=b;
        b=sum;
      }
    }
    


    return 0;
}