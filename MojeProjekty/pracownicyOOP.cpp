#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class pracownik{
public:

    string imie;
    string nazwisko;
    int wiek;

    void wczytaj(){

        cout<<endl<<"Podaj imie pracownika: ";
        cin>>imie;
        cout<<"Podaj nazwisko pracownika: ";
        cin>>nazwisko;
        cout<<"Podaj wiek pracownika: ";
        cin>>wiek;
        }
    
    void wypisz(){
        
        cout<<endl
        <<"Imie: "<<imie<<endl
        <<"Nazwisko: "<<nazwisko<<endl
        <<"Wiek: "<<wiek<<endl;
    }

};

int main(){

    pracownik prac[100];
    int i = 0,akcja;

    while (true){

        cout<<endl
        <<"WYBIERZ AKCJE"<<endl
        <<"1 wczytaj pracownika do bazy"<<endl
        <<"2 wypisz dane pracownika"<<endl
        <<"AKCJA: ";
        cin>>akcja;

        if (akcja == 1)
        {
            cout<<endl<<"Wybierz numer pracownika: ";
            cin>>i;
            prac[i].wczytaj();

        }
        else if (akcja == 2)
        {
            cout<<endl<<"Wybierz numer pracownika: ";
            cin>>i;
            prac[i].wypisz();

        }
        else cout<<"ZLY ZNAK!"<<endl;
    }

}