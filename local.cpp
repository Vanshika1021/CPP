#include<iostream>
using namespace std;
int a=20;
int main()
{
    const int a=30;
    cout<<::a;                        //::=scope resolution operator       
    cout<<a;
}