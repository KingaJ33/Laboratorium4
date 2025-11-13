// Laboratorium4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;


//ZAD.1
/*
void wyswietl(int a, int b);
int zwroc(int a, int b);

int main() {
    int a, b;

    cout << "podaj a " << endl;
    cin >> a;
    cout << " podaj b " << endl;
    cin >> b;

    wyswietl(a, b);

    return 0;
}

void wyswietl(int a, int b) {
    if (a < b) {
        cout << "Wieksza jest wartosc " << b << endl;
    }
    else if (b < a) {
        cout << "Wieksza jest wartosc " << a << endl;
    }
    else {
        cout << "Wartosci sa rowne " << endl;
    }
}

int zwroc(int a, int b) {
    if (a >= b) { 
        return a;
    }
    else { 
        return b;
    }
}
*/

//ZAD.2
/*
void ciag(int n);


int main() {
    int n;
    cout << "Podaj liczbe calkowita dodatnia: ";
    cin >> n;

    if (n > 0) {
        ciag(n);
    }
    else {
        cout << "Liczba musi byc calkowita dodatnia" << endl;
    }

    return 0;
}

void ciag(int n) {
    cout << "dzielniki liczby " << n << ": " << endl;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}
*/

//ZAD.3
/*
float dodawanie(float a, float b) {
    return a + b;
}

float odejmowanie(float a, float b) {
    return a - b;
}

float mnozenie(float a, float b) {
    return a * b;
}

float dzielenie(float a, float b) {
    return a / b;
}


int main() {
    float a, b;
    char znak, odp;
    float wynik;

    do {
        cout << "\nPodaj wartosc a: ";
        if (!(cin >> a)) {
            cout << "Niepoprawna wartosc. Koniec programu." << endl;
            return 1;
        }

        cout << "Podaj znak operacji (+, -, * lub /): ";
        cin >> znak;

        cout << "Podaj wartosc b: ";
        if (!(cin >> b)) {
            cout << "Niepoprawna wartosc. Koniec programu." << endl;
            return 1;
        }

        switch (znak) {
        case '+':
            wynik = dodawanie(a, b);
            cout << a << " + " << b << " = " << wynik << endl;
            break;

        case '-':
            wynik = odejmowanie(a, b);
            cout << a << " - " << b << " = " << wynik << endl;
            break;

        case '*':
            wynik = mnozenie(a, b);
            cout << a << " * " << b << " = " << wynik << endl;
            break;

        case '/':
            if (b == 0) {
                cout << "Blad: Nie mozna dzielic przez 0!" << endl;
            }
            else {
                wynik = dzielenie(a, b);
                cout << a << " / " << b << " = " << wynik << endl;
            }
            break;

        default:
            cout << "Podano nieprawidlowy znak operacji." << endl;
            break;
        }

        cout << "\nCzy zakonczyc dzialanie? (t - tak, n - nie): ";
        cin >> odp;


    } while (odp != 't' && odp != 'T');

    cout << "Koniec programu." << endl;
    return 0;
}
*/

//ZAD.4
/*
long long potega(int a, int b);

int main() {
    int a, b;
    long long rezultat;

    cout << "Podaj wartosc a " << endl;
    cin >> a;

    cout << "Podaj wartosc b " << endl;
    cin >> b;

    if (b < 0) {
        cout << "Wartosc b musi byc dodatnia" << endl;
        return 1;
    }

    rezultat = potega(a, b);

    cout << "Wynik dzialania wynosi: " << rezultat << endl;

    return 0;
}

long long potega(int a, int b) {
    long long wynik = 1;

    if (b == 0) {
        return 1;
    }

    for (int i = 0; i < b; i++) {
        wynik = wynik * a;
    }

    return wynik;
}
*/

//ZAD.5
/*
int silnia(int n);

int main() {
    int n;
    cout << "Podaj liczbe naturalna " << endl;
    cin >> n;

    silnia(n);

    cout << "silnia z " << n << " to " << silnia(n) << endl;

    return 0;

}

int silnia(int n) {
    int wynik = 1;

    for (int i = 1; i <= n; i++) {
        wynik = wynik * i;
    } 

    return wynik;
}
*/

//ZAD.6
// wersja 1.
/*
long long potega(int n);

int main() {
    int n;
    cout << "podaj wykladnik potegi dla liczby 2" << endl;
    cin >> n;

    potega(n);

    cout << "Wynik potegowania to " << potega(n) << endl;

    return 0;
}

long long potega(int n) {
   long long wynik = 1;

   if (n == 0) {
       return 1;
   }
   for (int i = 0; i < n; i++) {
       
       wynik = wynik * 2;
   }

   return wynik;
   
}
*/
// wersja 2.
/*
#include <cmath>

int main() {
    int n;
    double wynik;

    cout << "podaj wykladnik potegi dla liczby 2" << endl;
    cin >> n;

    wynik = pow(2.0, n);

    cout << "Wynik 2 do potegi " << n << " wynosi: " << wynik << endl;

    return 0;
}
*/

//ZAD.7
#include <cstdlib> 
#include <ctime>

void numerek(int n);

int main() {

    int n;

    cout << "podaj szczesliwy numerek " << endl;
    cin >> n;

    numerek(n);


    return 0; 
}
void numerek(int n) {

    srand(time(0));



}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
