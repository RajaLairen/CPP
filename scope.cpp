#include<iostream>
#pragma pack(1)
using namespace std;

class myclass{
 char b;
 int a;
};
int main(){
    myclass obj1;
    cout<<sizeof(obj1);
}