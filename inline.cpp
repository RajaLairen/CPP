#include <iostream>
using namespace std;
//function with default argument Default argument must define at end argument
void User(string name ,string serName="Lairenmayum");

//we cannot use void on inline function
void  Add(int a ,int b){
    int c;
    c=a+b;
}

int main(){

    User("Raja");
}

void User(string name,string serName){
    cout<<"Name="<<name<<endl;
    cout<<"SerName="<<serName<<endl;
}

