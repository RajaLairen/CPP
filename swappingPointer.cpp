#include<iostream>
using namespace std;

int main(){
    int a,b;
    a=10;
    b=20;
    int *ptr1,*ptr2,*ptr3;

    ptr1=&a;
    ptr2=&b;
    ptr3=new int;
    *ptr3=a;
    a=*ptr2;
    b=*ptr3;

    cout<<a<<b;
    return 0;
};