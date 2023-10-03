// display this GP
// 3,12,48,......upto 'n' terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of terms:";
    cin>>n;
    int temp=3;
    for(int i=1;i<=n;i++){
        cout<<temp<<endl;
        temp*=4;
    }
    return 0;
}