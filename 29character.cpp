#include<iostream>
using namespace std;
int main()
{
    char d;
    cout<<"enter value of d";
    cin>>d;
    bool lower,upper;
    lower=(d=='a'||d=='e'||d=='i'||d=='o'||d=='u');
    upper=(d=='A'||d=='E'||d=='I'||d=='O'||d=='U');
    if(!isalpha(d))
    {
        cout<<"is not alphabet";
    }
    else if(lower||upper)
    {
        cout<<"vowel";
    }
    else
    cout<<"consonant";

}