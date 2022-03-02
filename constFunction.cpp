#include<iostream>
using namespace std;

class User{
    public:
    int age;

    void Change(User &a) const;
};

void User::Change(User &a) const {
    a.age=40;
}

int main(){
    User Me,You;
    Me.age=10;
    You.age=20;
    You.Change(Me);
    cout<<Me.age;
}