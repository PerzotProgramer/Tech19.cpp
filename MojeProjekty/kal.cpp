#include<iostream>
#include<string.h>
#include<windows.h>
using std::cin, std::cout, std::endl;



int main(){

float ver = 0.3;
double x,y,i = 1;
char znak;

    cout<<"Konsolowy Kalkulator C++."<<
    endl<<"------------------------"<<endl<<
    endl<<"Podaj Pierwsz¥ Liczb©: ";
    cin>>x;
    cout<<"Podaj Drug¥ Liczb©: ";
    cin>>y;

    while (i>0){

        
        cout<<"Dziaˆaj¥ce znaki: +,-,*,/"<<endl<<"Podaj znak: ";
        cin>>znak;
//dodawanie
        if(znak == '+')
        {
            cout<<"Wynik: "<<x+y<<endl;
            i=0;
        }
        else
//odejmowanie
        if(znak == '-')
        {
            cout<<"Wynik: "<<x-y<<endl;
            i=0;
        }
        else
//mno¾enie
        if(znak == '*')
        {
            cout<<"Wynik: "<<x*y<<endl;
            i=0;
        }
        else
//dzielenie
        if(znak == '/')
        {
//nie przez 0
            if(x==0||y==0)
            {
                cout<<"NIE MO½NA DZIELI PRZEZ 0!"<<endl;
                i=1;
            }else
        
            cout<<"Wynik: "<<x/y<<endl;
            i=0;
        }
//zˆy znak
        else{
            system("cls");
            cout<<"NIEPOPRAWNY ZNAK!"<<endl;
            i=1;
            }
        
    }
    cout<<"Program zamknie si© za 5 sekund";
    Sleep(5000);
}