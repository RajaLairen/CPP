#include<iostream>
using namespace std;

class User{
 public:
 int a;
 public:
 User(){
     a=0;
 }
 User(int a){
     a=10;
 }
};

int main(){
    User Me;
    cout<<Me.a;
    return 0;
}