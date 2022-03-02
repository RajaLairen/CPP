#include<iostream>
#include<fstream>
using namespace std;
class A{
 int a,b;
 public:
 A(){

 }
 A(int i,int j){
   a=i;
   b=j;
 }
  A operator++(){
   a=++a;
  }
 void Display(){
   cout<<a+b;
 }
};
class B{
  public:
   void Display(){
   cout<<"B";
 }
 };
 template<typename T1>
 void Swap(T1 a){
   cout<<a;
 }
template<typename T1,typename T2>
 void Swap(T1 a,T2 b){
   cout<<a<<" "<<b;
 }

int main(){
  Swap(5,6);
  return 0;
}