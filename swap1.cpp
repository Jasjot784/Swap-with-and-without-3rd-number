#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b;
  cout<<"enter values of a and b"<<endl;
  cin>>a>>b;
  cout<<"values before swapping is:"<<"a="<<a<<endl<<"b="<<b<<endl;
  a= a+b;
  b=a-b;
  a=a-b;
  cout<<"values after swapping is:"<<"a="<<a<<endl<<"b="<<b<<endl;
}
