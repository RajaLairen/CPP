#include<iostream>

using namespace std;

class A{
    int a;
    public:
    A(){    //Default  Constructor
        a=0;
    }
    A(int val){
        a=val;
    }
    A(A &obj){
        a=obj.a;
    }
    void Display(){//Parameterise constructor
        cout<<a;
    }
};

int main(){
    A obj1,obj2,obj3;
    obj1.Display();
    obj2=A(20);//Explicit call
    obj3=A(obj2);
    obj2.Display();
    obj3.Display();
}