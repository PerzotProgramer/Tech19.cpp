#include<iostream>
using std::cout, std::cin, std::endl;
int main()
{
    int a,b,c,d;
    
    cout<<"ZADANIE1"<<endl;
    cout<<"Podaj liczbe1: ";  cin>>a;
    cout<<"Podaj liczbe2: ";  cin>>b;
    if ((a + b) % 2 == 0) cout<<"TAK, suma jest parzysta";
    else cout<<"NIE, suma nie jest parzysta";

}