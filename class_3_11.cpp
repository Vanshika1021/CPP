#include<iostream>
using namespace std;
class classroom
{   //private:                        //access
    double length;
    double width;
    double height;
    //public:
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
    classroom CSE;                    //object of classroom CSE
    CSE.length=10;
    CSE.width=5;
    CSE.height=7;
    cout<<CSE.area()<<endl;              //orX=CSE.area() 
    cout<<CSE.volume();
}
