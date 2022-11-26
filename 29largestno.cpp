#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter value of x,y,z";
    cin>>x>>y>>z;
    if(x>y&&x>z)
   { cout<<"x is greater";
   }
   else if(y>x&&y>z)
    {
   cout<<"y is greater";
    }
    else
    cout<<"z is greater";
}