#include<iostream>
#include<string>

using namespace std; 
float f=-7.34f;
int32_t sgn;
uint32_t unsgn;
int main()
{
    sgn=f;
    unsgn=sgn;
    cout<<"float  "<<f<<endl;
    cout<<"int32_t  "<<sgn<<endl;
    cout<<"unint32_t  "<<unsgn<<endl;

    int fahreinheit=100;
    int celcius;

    celcius=((float)5/9.0)*(fahreinheit - 32);
    cout<<"fahreinheit"<<fahreinheit<<endl;
    cout<<"celcius"<<celcius<<endl;

    float weight=10.99;

    cout<<endl;
    cout<<"float :"<<weight<<endl;
    cout<<"integer part :"<<(int)weight<<endl; 
    cout<<"fractional part  :"<<weight - (int)weight <<endl;
    return 0;
}
