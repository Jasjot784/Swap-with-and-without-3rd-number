#include<iostream>
using namespace std;
int swap(int *,int *);
int main()
{
int a,b;
cout<<"enter values of a and b"<<endl;
cin>>a>>b;
cout<<"values before swapping is:"<<"a="<<a<<endl<<"b="<<b<<endl;
int c=swap(&a,&b);
cout<<"values after swapping is:"<<"a="<<a<<endl<<"b="<<b<<endl;
}
int swap(int *p,int *q)
{int c;
c=*p;
*p=*q;
*q=c;

cout<<"values after swapping is:"<<"a="<<*p<<endl<<"b="<<*q<<endl;
}