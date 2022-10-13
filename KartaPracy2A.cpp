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

     //zad4
    cout<<endl<<"ZADANIE 4"<<endl;
    cout<<"Liczba1: ";  cin>>a;
    cout<<"Liczba2: ";  cin>>b;
    cout<<"Liczba3: ";  cin>>c;
    cout<<"Liczba4: ";  cin>>d;
    if (a < b && a < c && a < d) cout<<"Najmniejsza liczba to "<<a;
    else if (b < a && b < c && b < d) cout<<"Najmniejsza liczba to "<<b;
    else if (c < b && c < a && c < d) cout<<"Najmniejsza liczba to "<<c;
    else if (d < b && d < c && d < a) cout<<"Najmniejsza liczba to "<<d;
    else cout<<"Sa przynajmniej dwie najmniejsze liczby";

    //zad5
    cout<<endl<<"ZADANIE 5"<<endl;
    cout<<"Liczba1: ";  cin>>a;
    cout<<"Liczba2: ";  cin>>b;
    cout<<"Liczba3: ";  cin>>c;
    if (b - c < a && a < b + c || a - c < b && b < a + c || a - b < c && c < a + b)
    {
        cout<<"TAK, liczby spelniaja nierownosc trojkata";
    }
    else cout<<"NIE, liczby nie spelniaja nierownosci trojkata";

    //zad6
    //za takie rzeczy kocham C++
    cout<<endl<<"ZADANIE 6"<<endl;
    cout<<"Liczba1: ";  cin>>a;
    cout<<"Liczba2: ";  cin>>b;
    cout<<"Liczba3: ";  cin>>c;
    if (a < b + c && b < a + c && c < a + b)
    {
        cout<<"Trojkat powstanie, ";
        if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
        {
            cout<<"bedzie to trojkat prostokatny";
        }
        else if (a*a + b*b < c*c || b*b + c*c < a*a || c*c + a*a < b*b)
        {
            cout<<"bedzie to trojkat rozwartokatny";
        }
        else if (a*a + b*b > c*c || b*b + c*c > a*a || c*c + a*a > b*b)
        {
            cout<<"bedzie to trojkat ostrokatny";
        }
    }
    else cout<<"Trojkat nie powstanie";

}