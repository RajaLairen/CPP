#include<iostream>
#include<conio.h>

using namespace std;

void someThing(int (*ptr)[10]){
    (*ptr)[1]=20;
}

int main(){
    int arr[10]={1,2,3,4,5};
    someThing(& arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}

