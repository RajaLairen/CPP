#include<iostream>
using namespace std;

int main(){
    // int *ptr1[5];//Array of pointer
    // int *ptr2[5];//Pointer to an array
    // int *ptr;
    // ptr=new int;
    // *ptr=5;
    // cout<<*ptr<<endl;
    // delete ptr;
    // cout<<*ptr;

    // int a=5;
    // int b=10;
    // int const *ptr=&a;
    // a=10;
    // cout<<*ptr;

   int arr[4]={1,2,3,4};
   int *ptr=arr;
   cout<<*(ptr+1);
}