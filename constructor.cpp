#include <iostream>
using namespace std;

class User{
    string name;
    int age;
public:
    User();
};

User::User(){//constructor outside the class
    cout<<"Hi";
}

int main(){
    User Me;

}