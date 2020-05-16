#include<iostream>
using namespace std;
int main(){
  int a=1,b;
  b = a++;
  cout<<a<<" "<<b<<endl;
  b = a++ + ++a;
  cout<<a<<" "<<b<<endl;
  b = a++ + ++a +a+ ++a +a++;
  cout<<a<<" "<<b<<endl;
  int ch = 'a';
  char ch2 = 'a';
  cout<<ch<<" "<<ch2;
}
