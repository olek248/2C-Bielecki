#include <iostream>

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
    float temperature, Celsius_temperature, fahrenneit_temperature, kelvin_temperature, result_first, result_second;
    std::cout << "1.celsjusz, 2.fahrenheit, 3.kelvin\n";
    std::cin >> numberOfOperation;
    if (numberOfOperation == 1)
    {
        std::cout << "Podaj temperaturê w stopniach Celsiusza\n";
        std::cin >> Celsius_temperature;
        result_first = (Celsius_temperature * 1.8) + 32;
        result_second = Celsius_temperature + 273.15;
        std::cout << "temperatura w stopniach fahrenheita wynosi: " << result_first << "\n";
        std::cout << "temperatura w stopniach kelvina wynosi: " << result_second;

    }
    else if (numberOfOperation == 2)
    {
        std::cout << "Podaj temperaturê w stopniach fahrenheita\n";
        std::cin >> fahrenneit_temperature;
        result_first =
    }
    else
        std::cout << "Podaj temperaturê w stopniach Kelvina\n";

        
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    task2();
   
}


