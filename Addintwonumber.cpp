#include<iostream>
#include<conio.h>

using namespace std;

class Add{
    public:
    int a;
    int b;

    public:
    void getData(){
        int a,b;
    }
    void addition(){
        cout<<a+b;
    }
};

int main(){
    Add obj;
    cout<<"Enter two numbe to add"<<endl;
    cin>>obj.a>>obj.b;
    obj.getData();
}