#include<iostream>

using namespace std;
class B;
class A{
    int a;
    int b;
    public:
    A(){
        a=0;
        b=0;
    }
    friend void setData(A&,B&);
    void Display(){
        cout<<a<<endl<<b;
    }
};

class B{
    int a;
    int b;
    public:
    B(){
        a=0;
        b=0;
    }
    friend void setData(A &,B &);

    void Display(){
        cout<<a<<b;
    }
};
void setData(A &obja,B &objb){
    obja.a=5;//It can acces private data
    obja.b=10;
    objb.a=20;
    objb.b=30;
}
int main(){
    A obj1;
    B obj2;
    setData(obj1,obj2);
    obj1.Display();
    obj2.Display();
}