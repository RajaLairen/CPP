#include<iostream>
#include<istream>
#include<iomanip>
#include<ios>

using namespace std;

int main(){
   istringstream str("         Programmer");
	string line;
	getline(str>>std::ws,line);
	cout<<line<<endl;
	cout<<"only a test"<<flush;
	cout<<"\na";
	cout<<"b"<<ends;
	cout<<"c"<<endl;
}
#if 0
int main(){
   int  a=10;
   string b="Text";
   cout<<setfill('#')<<setw(10)<<"Hello"<<endl;
   cout<<"Hi"<<endl;
   cout<<fixed<<12.456<<endl;
   cout<<setbase(8)<<a<<endl;
   cout<<oct<<10;
}
#endif