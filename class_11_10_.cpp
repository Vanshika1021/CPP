#include<iostream>
using namespace std;
class classroom
{
    private:
    int l,w;

    public:
    //classroom()                              //default constructor
    
    classroom (int x,int y)                             //parametric
    {
        l=x;
        w=y;
        cout<<l<<w<<endl;
    }
    
    ~classroom (int x,int y,int z=5) 
    {
        cout<<"hello";
    }                   
    {
        l=x;
        w=y;
        cout<<l<<" "<<w<<endl;
    }
    void area()
    {
        cout<<l*w<<endl;
    }

};
int main()
{
    classroom c1(10,20);
    c1.area();
    classroom c3(30,40);
    c3.area();
    classroom c4(50,60,70);
    c4.area();
    return 0;
}