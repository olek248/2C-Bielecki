#include <iostream>

#pragma region zadanie1
/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.
Instrukcje:
Poproœ u¿ytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mno¿enie lub dzielenie).
W zale¿noœci od wyboru u¿ytkownika, wykonaj odpowiedni¹ operacjê arytmetyczn¹.
Wyœwietl wynik operacji.
Przyk³adowe dzia³anie programu:
Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno¿enie
4. Dzielenie
*/
void task1()
{
    int first_number, second_number, result,number_arithmetic_operation;
    std::cout << "1.dodawanie, 2.odejmowanie, 3.mno¿enie, 4.dzielenie 0.koniec porgramu\n";
    std::cout << "podaj liczbê operacji\n";
    std::cin >> number_arithmetic_operation;
    
    if (number_arithmetic_operation == 0)
        return;
    else
    {
        std::cout << "podaj pierwsz¹ liczbê\n";
        std::cin >> first_number;
        std::cout << "podaj drug¹ liczbê\n";
        std::cin >> second_number;
    }
    if (number_arithmetic_operation == 1)
        result = first_number + second_number;
    else if (number_arithmetic_operation == 2)
        result = first_number - second_number;
    else if (number_arithmetic_operation == 3)
        result = first_number * second_number;
    else if (number_arithmetic_operation == 4)
        result = first_number / second_number;
    else
    {
        std::cout << "podaj prawid³ow¹ liczbê!\n";
        return;
    }
    std::cout << "wynik to: " << result;
}
#pragma endregion to jest zadanie1
#pragma region zadanie2
/*
ZADANIE
Konwersja temperatury
Napisz program, który bêdzie konwertowaæ temperaturê pomiêdzy skalami : Celsiusza, Fahrenheita i Kelvina.
Instrukcje :
    Poproœ u¿ytkownika o wybór jednostki, z której chce dokonaæ konwersji(C - Celsiusz, F - Fahrenheit, K - Kelvin).
    Poproœ u¿ytkownika o podanie temperatury w wybranej jednostce.
    Przelicz temperaturê na pozosta³e jednostki(z wykorzystaniem odpowiednich wzorów konwersji).
    Wyœwietl przeliczone temperatury.
    Przyk³adowe dzia³anie programu :
Konwerter Temperatur
-------------------- -
Wybierz jednostkê temperatury :
1. Celsiusz(C)
2. Fahrenheit(F)
3. Kelvin(K)
Wybór : C
Podaj temperaturê w stopniach Celsiusza : 25
Przeliczona temperatura :
Fahrenheit: 77.0 °F
Kelvin : 298.15 K
*/
void task2()
{
    int numberOfOperation;
    float temperature, first_converted_temperature, second_converted_temperature;
    std::cout << "1. celsjusz, 2. fahrenheit, 3. kelvin\n";
    std::cin >> numberOfOperation;
    if (numberOfOperation == 1)
    {
        std::cout << "Podaj temperaturê w stopniach Celsiusza\n";
        std::cin >> temperature;
        first_converted_temperature = (temperature * 1.8) + 32;
        second_converted_temperature = temperature + 273.15;
        std::cout << "temperatura w stopniach fahrenheita wynosi: " << first_converted_temperature << "\n";
        std::cout << "temperatura w stopniach kelvina wynosi: " << second_converted_temperature;

    }
    else if (numberOfOperation == 2)
    {
        std::cout << "Podaj temperaturê w stopniach fahrenheita\n";
        std::cin >> temperature;
        first_converted_temperature = (temperature - 32) / 2;
        second_converted_temperature = (temperature + 459, 67) * 5 / 9;
        std::cout << "temperatura w stopniach celsjusza wynosi: " << first_converted_temperature << "\n";
        std::cout << "temperatura w stopniach kelvina wynosi: " << second_converted_temperature << "\n";
    }
    else
    { 
        std::cout << "podaj temperature w stopniach kelvina\n";
        std::cin >> temperature;
        first_converted_temperature = temperature - 273.15;
        second_converted_temperature = temperature * 9 / 5 - 459, 67;
        std::cout << "temperatura w stopniach celsjusza wynosi: " << first_converted_temperature << "\n";
        std::cout << "temperatura w stopniach fahrenheita:  " << second_converted_temperature << "\n";
    }
}
#pragma endregion to jest zadanie 2
#pragma region zadanie3
/*
ZADANIE
Symulator rzutu kostk¹
Napisz program, który bêdzie symulowa³ rzut kostk¹.Program powinien umo¿liwiaæ u¿ytkownikowi wybór rodzaju kostki(np. 6 - œcienna, 10 - œcienna, 20 - œcienna) oraz iloœæ rzutów.Po wykonaniu rzutów, program powinien wyœwietliæ wyniki oraz sumê otrzymanych wartoœci.
Instrukcje:
Poproœ u¿ytkownika o wybór rodzaju kostki(np. 6 - œcienna, 10 - œcienna, 20 - œcienna).
Poproœ u¿ytkownika o podanie iloœci rzutów.
Wykonaj podan¹ liczbê rzutów wybranej kostk¹, zapisuj¹c wyniki.
Wyœwietl otrzymane wyniki oraz sumê otrzymanych wartoœcis.
Przyk³adowe dzia³anie programu :
Symulator rzutu kostk¹
---------------------- -
Wybierz rodzaj kostki(6 / 10 / 20) : 10
Ile rzutów chcesz wykonaæ ? : 5
Wyniki rzutów kostk¹ 10 - œcienn¹ :
    1. Rzut 1 : 7
    2. Rzut 2 : 3
    3. Rzut 3 : 10
    4. Rzut 4 : 5
    5. Rzut 5 : 8
    Suma wyników : 33
*/
void menu_dice_choose(int dice_type)
{
    std::cout << "1. kostka szeœcienna\n";
    std::cout << "2. kostka dziesiêcioœcienna\n";
    std::cout << "3. kostka dwudziestoœcienna\n";
    std::cin >> dice_type;
}

void task3()
{
   
}
#pragma endregion to jest zadanie 3
#pragma region zadanie4
/*
Konwerter jednostek
Napisz program konwertuj¹cy jednostki miar.Program powinien umo¿liwiaæ konwersjê miêdzy ró¿nymi jednostkami(np.metry na centymetry, kilogramy na funty) oraz obs³ugiwaæ ró¿ne typy jednostek.
Instrukcje:
Zdefiniuj zestaw jednostek, które chcesz obs³ugiwaæ(np.d³ugoœæ: metry, centymetry, cale; masa: kilogramy, funty).
Poproœ u¿ytkownika o wybór jednostki wejœciowej i jednostki wyjœciowej oraz podanie wartoœci do konwersji.
Przekonwertuj wartoœæ z jednostki wejœciowej na jednostkê wyjœciow¹ na podstawie ustalonego wspó³czynnika konwersji.
Wyœwietl wynik konwersji.
Przyk³adowe dzia³anie programu :
Konwerter jednostek
------------------ -
Wybierz jednostkê wejœciow¹ :
1. Metry
2. Centymetry
3. Cale
Wybór : 1
Wybierz jednostkê wyjœciow¹ :
1. Metry
2. Centymetry
3. Cale
Wybór : 2
Podaj wartoœæ do konwersji : 5
Wynik konwersji : 500 centymetrów
*/

void task4()
{

}
#pragma endregion to jest zadanie 4
int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    task4();
   
}


