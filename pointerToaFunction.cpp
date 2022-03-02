#include<iostream>

using namespace std;

void Say(){
    cout<<"Hi";
}

void Add(int a,int b){
    cout<<a+b;
}

int main(){
    void (*function1)()=&Say;
    void (*function2)(int ,int)=&Add;
    function1();
    function2(5,6);
    return 0;
}