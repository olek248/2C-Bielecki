// LoopForConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
 * Program obliczaj¹cy sumê liczb od 1 do 100
 * Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹ (czyli tak¹, której suma dzielników (z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
 * Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
 * Program obliczaj¹cy n!.
 * Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
 * Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
 * Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
 * Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
 * Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
 * Program, kóry wyœwietli poni¿sze cztery zwory:
	 ****       54321        121212        122333
	 ***        65432        212121        223334444
	 **         76543        121212        333444455555
	 *          87654        212121        444455555666666
 * Oblicz sumê szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Je¿eli siê nie pomylisz, to dla odpowiednio du¿ej wartoœci n po przemno¿eniu jej przez 6 i spierwiastkowaniu powinieneœ otrzymaæ wartoœæ liczby ? (suma szeregu jest równa ?2/6). Zwróæ uwagê, ¿e pierwsza wartoœæ indeksu to 1, a nie 0. Dok³adnoœæ obliczeñ mo¿na sprawdziæ porównuj¹c z wartoœci¹ odczytan¹ z w³asnoœci Math.PI.
 * Rozk³ad liczby na czynniki pierwsze
 */
 //Program obliczaj¹cy sumê liczb od 1 do 100

void task1()
{
	int number;
	std::cout << "podaj liczbê\n";

	for (int i = 1; i < 101; i++)
	{
		number = number + i;
	}
	std::cout << "suma wynosi " << number;
}
// * Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹ (czyli tak¹, której suma dzielników (z wy³¹czeniem samej siebie) jest równa danej liczbie,
void task2()
{
	
	int number, sum = 0;
	std::cout << "podaj liczbê\n";
	std::cin >> number;
	for (int i = 1; i != number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	if (number == sum)
	{
		std::cout << "liczba jest liczb¹ doskona³¹";
	}
}
//Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task3()
{
	int result = 1;
	for (int i = 1; i != 11; i++)
	{
		result = 1;
		result *= i * i;
		std::cout << result << '\n';
	}
}
//Program obliczaj¹cy n!.
void task4()
{
	int number, result = 1;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;
	for (int i = 1; i != number + 1; i++)
	{
		result *= i;
	}
	std::cout << result;
}
//Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task5()
{
	for (int i = 1; i <= 10; i++)
		std::cout << i << "!";
}
//Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task6()
{
	for (int i = 0; i < 11; i++)
	{

	}

}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//ask5();
}

