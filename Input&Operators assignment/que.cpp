
// WAP for finding volume of cylinder by taking radius and height as input
#include <iostream>
using namespace std;
int main()
{  
      int radius,height;
      float volume;
      cout<<"enter the radius of cylinder:";
      cin>>radius;cout<<endl;
      cout<<"enter the height of cylinder:";
      cin>>height;cout<<endl;
      cout<<"Volume of the cylinder is :";
      volume = 3.142*radius*radius*height;
      cout<<volume;
       return 0;
}

// WAP to find the difference between ASCII of two characters ,take them as input
 #include <iostream>
 using namespace std;
 int main(){
      char ch1,ch2;
      cin>>ch1;
      cin>>ch2;
      cout<<((int)ch2-(int)ch1);
       return 0;
 }


