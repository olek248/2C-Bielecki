// HaractersConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
typy znakowe:
*   char - 1 bajt ca³kowitoliczbowa ze znakiem <-128, 128
*/
//napisz program który pobierze znak od u¿ytkownika i wyœwietli go.

/*
* Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).

* Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
* Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

//Napisz program który pobierze znak od u¿ytkownika i wyœwieli go.
void task1()
{
    char characterfromUser;
    std::cout << "podaj znak\n";
    std::cin >> characterfromUser;

    std::cout << "poda³eœ znak: " << characterfromUser << "\n";
}
//napisz program który wczyta znak z klawiatury i sprawdzi czy jest to ma³a litera alfabetu
void task2()
{
    unsigned char characterFromUser;
    std::cout << "podaj znak\n";
    std::cin >> characterFromUser;
    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        std::cout << "jest to ma³a litera alfabetu\n";
    else
        std::cout << "nie jest to ma³a litera alfabetu\n";
}

//napisz program, który poprosi ciê o twoje imiê i ciê przywita.
void task3()
{
    std::string userName;
    std::cout << "podaj swojê imiê\n";
    std::cin >> userName;
    
    std::cout << "Witaj " << userName << " tutaj.\n";
}

//program sprawdzaj¹cy czy podane has³o jest poprawne
//(np. jeœli has³o jest "abc123" program powinien wyœwietliæ "has³o poprawne"
//jeœli inne, powinien wyœwietliæ "has³o niepoprawne").
void task4()
{
    std::string password;
    std::cout << "podaj has³o: \n";
    std::cin >> password;
    if (password == "abc123")
        std::cout << "has³o jest poprawne\n";
    else
        std::cout << "has³o niepoprawne\n";
}

//napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.
void task5()
{
    std::string textFromUser;
    std::cout << "podaj ³añcuch znaków\n";
    std::cin >> textFromUser;

    int numberOfCharacters = 0;
    
    std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
    textFromUser[1] = 'x';
    std::cout << "Iloœæ znaków " << textFromUser.length() << "\n";

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[1] == 'a')
            numberOfCharacters++;
    }

}

//* Napisz program, który bêdzie prosi³ o has³o. 
// Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task6()
{
    std::string password;
    
    do
    {
        std::cout << "podaj has³o\n";
        std::cin >> password;
    } while (password != "majonezkielecki");
    std::cout << "gratulacje u¿ytkowniku poprawne has³o";
}

//* Napisz program, 
//który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task7()
{
    std::string userText;
    int numberOfVovels;
    int numberOfConsonat;
    std::cout << "podaj ci¹g znaków\n";
    std::cin >> userText;
    for (int i = 0; i < userText.length(); i++)
    {
        if (userText[i] >= 'a' && userText[i] <= 'z')
            if (userText[i] == 'a' ||
                userText[i] == 'e' ||
                userText[i] == 'i' ||
                userText[i] == 'i' ||
                userText[i] == 'i' ||
                userText[i] == 'o' ||
                userText[i] == 'u' ||
                userText[i] == 'y')
            {
                std::cout << "litera to samog³oska\n" << i + 1;
                numberOfVovels++;
            }
            else
            {
                std::cout << "litera to spó³g³oska\n" << i + 1;
                numberOfConsonat++;
            }
    }
    std::cout << "liczba samog³osek to " << numberOfVovels << "\n";
    std::cout << "liczba spó³g³osek to " << numberOfConsonat << "\n";
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
    task7();
}


