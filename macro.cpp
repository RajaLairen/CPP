#include<iostream>
#define GREATEST(x,y) {(x)>(y)?(x):(y)}
using namespace std;

int main(){
    int a;
    a=GREATEST(5,6);
    cout<<a;
}