#include<iostream>
#include<string>
#include<cstdint>

#define CAPACITY 5000
#define DEBUG
using namespace std;
int main()
{   
    int32_t large=CAPACITY;
    uint8_t small=37;
#ifdef DEBUG
    cout<<"[about to perform the addition]"<<endl;
#endif
    large+=small;
    cout<<"The large integer:: "<<large<<endl;
    return 0;    
}