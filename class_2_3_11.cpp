#include<iostream>
using namespace std;
class classroom
{   private:                        //access
    double length;
    double width;
    double height;
    public:
    void set(double length,double width,double height)                                //void set(double l,double w,double h)
    {
        this->length=length;                                                                //lenght=l;
        this->width=width;                                                                  //width=w;
        this->height=height;                                                                //height=h;
    }                                                                   //this keyword is used here
    double area()
    {
        return length*width;
    }
    double volume()
    {
        return length*width*height;
    }
};
int main()
{
    classroom CSE;                                //CSE is reference variable
    double a=10;
    double b=5;
    double c=3;
    CSE.set(a,b,c);
    cout<<CSE.area()<<endl;
    cout<<CSE.volume();
}