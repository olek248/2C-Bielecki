// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
*. Program obliczaj¹cy pole prostok¹ta.
*. Program obliczaj¹cy objêtoœæ sto¿ka.
*. Program obliczaj¹cy pole ko³a.
*. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
*. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
*. Program obliczaj¹cy objêtoœæ kuli o promieniu r
*. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
*. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
*. Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
*/

       //Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli
void task1()
{
    std::cout << "Podaj Liczbe\n";
    int numberFromUser;
    std::cin >> numberFromUser;

    std::cout << "Podales " << numberFromUser << "\n";
}


//program obliczaj¹cy œredni¹ artmetyczn¹ dwóch liczb
void task2()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz¹ liczbê\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug¹ liczbê\n";
    std::cin >> secondNumber;

    int average;
   average = (firstNumber + secondNumber) / 2;

   std::cout << "Œrednia to: " << average << "\n";
}
//program obiczaj¹cy pole prostok¹ta
void task3()
{
    int firstSide, secondSide;
    std::cout << "Podaj pierwszy bok prostok¹ta\n";
    std::cin >> firstSide;
    std::cout << "Podaj drugi bok prostok¹ta\n";
    std::cin >> secondSide;

    int area;
    area = firstSide * secondSide;
    std::cout << " Pole wynosi ";
    std::cout << area;
}

//program obliczaj¹cy objêtoœæ sto¿ka
void task4()
{
    int h, r, V;
    std::cout << "Podaj wysokoœæ sto¿ka\n";
    std::cin >> h;
    std::cout << "Podaj promieñ sto¿ka\n";
    std::cin >> r;

    int area;
    area = 1 / 3 * h * 3, 14 * r * r;
    std::cout << "Objêtoœæ sto¿ka wynosi ";
    std::cout << area;






}



int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    task4();
      


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