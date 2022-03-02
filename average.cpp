#include <iostream>
using namespace std;

int SumUsingInt(int a,int b)
{
    return a+b;
}

void SumUsingVoid(int a,int b){
    cout<<a+b;
}

int main()
{
    SumUsingVoid(5,10);
    cout<<SumUsingInt(5,20);
    return 0;
}