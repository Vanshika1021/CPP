#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int LENGTH1 =25;

char array_str1[LENGTH1]="Hey! Guys.. Kem cho??";
char array_str2[]="What's up??";

string std_str1="hi evryone!";
string std_str2="how's going on??";

int main()
{
   //std::string(array_str1,LENGTH1,array_str2);
   cout<<array_str1<<endl;
   cout<<std_str1 + std_str2 <<endl;
   return 0;
} 
