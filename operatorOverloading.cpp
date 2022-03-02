#include<iostream>

using namespace std;

class OperatorOverloading{
    int a;
    int b;
    public:
    OperatorOverloading(){
        a=0;
        b=0;
    }
    OperatorOverloading(int value){
        a=value;
    }
    OperatorOverloading(int value,int val){
        a=value;
        b=val;
    }

    void Display(){
        cout<<a<<endl;
        cout<<b;
    }
    operator int(){//User define to basic
        return a;
    }
    OperatorOverloading operator=(int val){//Basic to User define data Type
        a=val;
        b=val;
    }
};

int main(){
    OperatorOverloading O1(10,20);
    OperatorOverloading O2=30;
    O2.Display();
    return 0;
}