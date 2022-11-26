  #include<iostream>
  #include<typeinfo>
  using namespace std;
  auto a=8;
  auto b=3.14;
  auto c=true;
  auto d=45.3246789009;
  auto e=3.14f;
  auto f=890000000;
 
  int main()
  {
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    return 0;
  }  
