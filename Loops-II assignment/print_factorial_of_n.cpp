// print the factorial of first 'n' numbers
#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
      fact*=i;
      cout<<"factorial of '"<<i<<"' : "<<fact<<endl;
    }
    return 0;
}