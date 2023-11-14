// LoopDoWhileConsole_Apllication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczbê doodatni¹:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczbê doodatni¹:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczbê doodatni¹:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczbê doodatni¹:\n";
					std::cin >> numberFromUser;
					//wklejamy ca³ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}


//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.

void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "podaj liczbê dodatni¹:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "liczba pobrana od u¿ytkownika " << numberFromUser << "\n";
}
void task3()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	rest = number % 10;
	sum = sum + rest;
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
	//4125
}
//poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero.
//oblicz sumê oraz œredni¹ artmetyczn¹ wprowadzonych liczb.
void task4()
{
	int number;
	int sum = 0;
	int numberOfNumbers = 0;
	std::cout << "podaj liczbê\n";
	std::cin >> number;
	sum = sum + number;
	if (number != 0)
	{
		std::cout << "podaj liczbê\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
	}
	if (number != 0)
	{
		std::cout << "podaj liczbê\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
	}
	if (number != 0)
	{
		std::cout << "podaj liczbê\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
	}
	do
	{
		std::cout << "podaj liczbê\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
	} while (number != 0);
	std::cout << "suma wszystkich liczb to " << sum << "\n";
	double avg = sum / numberOfNumbers;

}

int main()
{
	//task1();
	//task2();
	//task3();
	task4();
}


