#include<iostream>
#include<windows.h>
using std::cout,std::endl;
int main(){

unsigned long long a=1,b=1,t=500;

cout<<a<<endl;

    while (true){
  
        cout<<a<<endl;
        b=b+a;
        Sleep(t);
        cout<<b<<endl;
        a=a+b;
        Sleep(t);

    }

}