#include<iostream>
using namespace std;

class GreatestOfThreeNumber{
    int a,b,c;
    public:
    GreatestOfThreeNumber(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    int Greatest(){
        if(a>b&&a>c){
            return a;
        }
        else if(b>c){
            return b;
        }
        else {
            return c;
        }
    }
    void PrintGreatest(){
        cout<<"The greatest number is "<<Greatest();
    }
};

int main(){
    GreatestOfThreeNumber Me(5,10,3);
    Me.PrintGreatest();
    return 0;
}