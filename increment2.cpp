#include<iostream>
using namespace std;
int main()
{
  int a=1;
  cout<<++a<<a++<<++a<<endl;//424
  cout<<++a<<++a<<++a<<endl;//777
  cout<<++a<<a++<<++a<<a<<++a<<a++<<++a;//1311131313813
}
