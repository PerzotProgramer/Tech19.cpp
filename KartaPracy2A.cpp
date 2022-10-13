#include<iostream>
#include<cmath>
using std::cout, std::cin, std::endl;
int main()
{
    //Umiem dodać polskie znaki ale jestem leniem
    //np. można zmienić kodowanie przy kompilacji na CP852
    //wtedy *.exe będzie poprawnie wyświetlać znaki
    
    int a,b,c,d;
    
    //zad1
    cout<<"ZADANIE 1"<<endl;
    cout<<"Liczba1: ";  cin>>a;
    cout<<"Liczba2: ";  cin>>b;
    if ((a + b) % 2 == 0) cout<<"TAK, suma jest parzysta";
    else cout<<"NIE, suma nie jest parzysta";

    //zad2
    cout<<endl<<"ZADANIE 2"<<endl;
    cout<<"Podaj liczbe1: ";  cin>>a;
    cout<<"Podaj liczbe2: ";  cin>>b;
    if ((a + b) / 2 > sqrt(a*b)) cout<<"TAK, sr ar > geo";
    else cout<<"NIE, sr ar < geo";

    //zad3
    cout<<endl<<"ZADANIE 3"<<endl;
    cout<<"Liczba1: ";  cin>>a;
    cout<<"Liczba2: ";  cin>>b;
    cout<<"Liczba3: ";  cin>>c;
    if (a == b || a == c || b == c)
    {
        cout<<"TAK, przynajmniej dwie sa rowne"<<endl;
        if (a == b && a == c && b == c) cout<<"Wszystkie liczby sa rowne";
        else if (a == b) cout<<"Rowne liczby to 'Liczba1' i 'Liczba2'";
        else if (a == c) cout<<"Rowne liczby to 'Liczba1' i 'Liczba3'";
        else if (b == c) cout<<"Rowne liczby to 'Liczba2' i 'Liczba3'";
    }
    else cout<<"NIE, nie ma rownych";
}