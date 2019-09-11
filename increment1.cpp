#include<iostream>
using namespace std;
int main()
{
  int a=1;
  int b=1;
  a=(a++) + (++b);
  b=(b++) + (++a);
  cout<<a<<b<<endl;//46
}
