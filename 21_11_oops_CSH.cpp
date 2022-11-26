/*
OOPs
1.Inheritance :) *increase reusability of codes 
                1.single
                A->B
                here A is 1.super class,
                          2.base class
                          3.paren class
                     B is 1.sub class
                          2.derived class
                          3.child class

                2.multilevel
                A->B->C->D.....

                3.multiple
                A->C and B->C  one child having more then one parent
                               JAVA does not suppoert directly while C++ does.

                4.hererichy
                A->D B->D c->D 
                D have acces of more then one parent.

                5.hybrid
                A->B A->C
                B->D C->D

2.Polymorphism :) *poly- many ,, morphism-forms
                 example-1.one act many roles liek mother
                         2.money transaction through many medium paytm,phonepay etc.
                
3.Abstraction :) *hide data 
                **tells what we have to show to user
                example-employee e1 work same as volume button in phone(object)

4.Encapsulation :) *secure code that no one can access that code 
                  *bind data and functionality together 
                  *hide data 
                  *We use access specifier 
                  **tells what we have to hide from user
                  *to acheive abstraction
                  example-use of Class

*/
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    private:
    int b =10;
    protected:
    int c;
};
class B: public A            //visibility class A //visibility mode tells superclass k members ko subclass me kaise access krna h
{                            //all member of class A is available but not accessable.
    public:
    int d;
    void show()
    {
        c=60; 
        cout<<c<<endl;               //we do not write int c as it was already present in class A
    }
};
int main()
{
    /*
    A a1;
    a1.d=30; is wrong as a1 is parent class and d is child class;   A member can not access B class objects 
    cout<<a1.d; 
    */
    class B z;
    z.d=30;
    z.a=10;
    //z.b=20;             
    //z.c=50;
    z.show();
    cout<<z.d<<endl;
    cout<<z.a<<endl;
    //cout<<z.b;
    //cout<<z.c;
}