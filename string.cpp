#include<iostream>
#include<conio.h>
#pragma pack(1)

using namespace std;

class User{
    int a;
    public:
    User(){
        cout<<"Hello";
    }
   ~User(){
       cout<<"Destroy";
   }
};
void Destructor(){
    User Obj1;
}

int main(){
    Destructor();
    Destructor();    
    return 0;
}