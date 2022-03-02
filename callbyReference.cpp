#include<iostream>
using namespace std;

void Increment(int *y){
    *y+=1;
}

int main(){
    int x=5;
    Increment(& x);
    cout<<x;
}