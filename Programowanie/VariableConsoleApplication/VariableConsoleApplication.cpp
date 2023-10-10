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
    double height, radius, volume;
    std::cout << "Podaj wysokoœæ sto¿ka\n";
    std::cin >> height;
    std::cout << "Podaj promieñ sto¿ka\n";
    std::cin >> radius;

    volume= (height * 3.14 * radius * radius) /3;
    std::cout << "Objêtoœæ sto¿ka wynosi ";
    std::cout << volume;
}

//program obiczaj¹cy pole ko³a
void task5()
{
    int radius, area;
    std::cout << "Podaj promieñ ko³a\n";
    std::cin >> radius;
    area = 3.14 * radius * radius;
    std::cout << " Pole wynosi ";
    std::cout << area;
}

//program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
void task6()
{
    int number_a, number_b, wyrazenie;
    std::cout << "podaj liczbe a\n";
    std::cin >> number_a;
    std::cout << "podaj liczbe b\n";
    std::cin >> number_b;
    wyrazenie = number_a * number_a * number_b * number_b;
    std::cout << " wyra¿enie wynosi ";
    std::cout << wyrazenie;
}


//Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
void task7()
{
    int base, height, area;
    std::cout << "podaj podstawe trójk¹ta\n";
    std::cin >> base;
    std::cout << "podaj wysokoœæ trójk¹ta\n";
    std::cin >> height;
    area = (base * height) / 2;
    std::cout << " pole trójk¹ta wynosi ";
    std::cout << area;
}


//Program obliczaj¹cy objêtoœæ kuli o promieniu r
void task8()
{
    int radius, volume;
    std::cout << "podaj promieñ ko³a\n";
    std::cin >> radius;
    volume = (3.14 * radius * radius * radius) * 4 / 3;
    std::cout <<  " objêtoœæ wynosi ";
    std::cout << volume;
}


//Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
void task9()
{
    int base_a, base_b, height, area;
    std::cout << "podaj d³ugoœæ pierwszej podstawy trapezu\n";
    std::cin >> base_a;
    std::cout << "podaj d³ugoœæ drugiej podstawy trapezu\n";
    std::cin >> base_b;
    std::cout << "podaj wysokoœæ trapezu\n";
    std::cin >> height;
    area = (base_a + base_b) * height / 2;
    std::cout << " pole wynosi ";
    std::cout << area;
}


//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task10()
{
    int number_a, number_b, number_c, weight_a, weight_b, weight_c, weighted_average;
    std::cout << "podaj pierwsz¹ liczbê\n";
    std::cin >> number_a;
    std::cout << "podaj drug¹ liczbê\n";
    std::cin >> number_b;
    std::cout << "podaj trzeci¹ liczbê\n";
    std::cin >> number_c;
    std::cout << "podaj wagê pierwszej liczby\n";
    std::cin >> weight_a;
    std::cout << "podaj wagê drugiej liczby\n";
    std::cin >> weight_b;
    std::cout << "podaj wagê trzeciej liczby\n";
    std::cin >> weight_c;
    weighted_average = (number_a * weight_a + number_b * weight_b + number_c * weight_c) / 3;
    std::cout << " œrednia wa¿ona wynosi ";
    std::cout << weighted_average;
}


//Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
void task11()
{
    int lenghtM, lenghtCM, lenghtMM;
    std::cout << "podaj d³ugoœæ w metrach\n";
    std::cin >> lenghtM;
    lenghtCM = lenghtM * 100;
    lenghtMM = lenghtCM * 10;
    std::cout << "d³ugoœæ w centymetrach wynosi: " << lenghtCM << " cm, a w milimetrach wynosi " << lenghtMM << "mm";
}


//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
void task12()
{
    double USD, PLN;
    std::cout << "podaj kwotê w z³otówkach, któr¹ chcesz zamieniæ na dolary\n";
    std::cin >> PLN;
    USD = PLN * 4.32;
    std::cout << " kwota w dolarach wynosi ";
    std::cout << USD;











}



int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
      


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