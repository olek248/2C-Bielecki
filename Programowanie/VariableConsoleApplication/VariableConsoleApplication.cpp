// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
       //Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli
       
    std::cout << "Podaj Liczbe\n";
    int numberFromUser;
    std::cin >> numberFromUser;

    std::cout << "Podales " << numberFromUser << "\n";
}

/*
// Algorytm- skoñczony zbiór instrukcji, który rozwi¹zuje zadany problem. Okreœla te¿ kolejnoœæ wykonywanych instrukcji. 
zapis algorytmu:
 * rysunki
 * opis s³owny
 * w punktach
 * schemat blokowy
 * kod ¿ród³owy danego jêzyka programowania
 * pseudokod
 
Zmienna- pewien obszar w pamiêci operacyjnej, w której mo¿na w danej chwili przechowaæ tylko jedn¹ dan¹

Instrukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

typ zmiennej- wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów
int - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
long - to samo co int
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned-zmienna bez znaku <0, 2*max+1>

float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 liczb po przecinku

Nazwa zmiennej - nazwa obszaru pamiêci, identyfikator
Warunki niezbêdne:
*dozwolone znaki:
    - alfabet angielski aA-zZ
    -cyfry arabskie 0-9
    -podkreœlenie (pod³oga) (_)
* pierwszym znakiem nie mo¿e byæ cyfra
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywania danych
* jeœli wiele s³ów to w miejscu spacji podkreœlenie lub zaczynaj¹c od drugiego s³owa piszemy je z du¿ej litery
* piszemy po angielsku
*/