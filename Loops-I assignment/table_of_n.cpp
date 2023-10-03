// print the table of n where n is an  integer which user 
// will give as an input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the 'n' whose table has to be print:";
    cin>>n;
    for(int i=n;i<=(n*10);i+=n) cout<<i<<endl;
    return 0;
}