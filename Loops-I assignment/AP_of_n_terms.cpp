// display this AP
// 4,7,10,13,16,......upto 'n' terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of terms:";
    cin>>n;
    int temp=4;
     for(int i=1;i<=n;i++){
         cout<<temp<<endl;
         temp+=3;
     } 
    return 0;
}