#include<iostream>
using namespace std;

class User{
    int a;
    static int b;
    public:
    User(){

    }
    User(int inpt){
        a=inpt;
    }

    User operator+ (User obj){
        User tmp;
        tmp.a=a+obj.a;
        return  tmp;
    }
};

int User::b=10;

int main(){
    User O1(5),O2(6),O4;
    O4=O1+O2;
    return 0;
}