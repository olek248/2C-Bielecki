// loopWhileconsoleApllication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void task1()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsz¹ liczbê\n";
	std::cin >> firstNumber;
	std::cout << "podaj drug¹ liczbê\n";
	std::cin >> secondNumber;

	int nwd;
	nwd = firstNumber;

	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
		nwd--;

	std::cout << "NWD jest równe " << nwd << "\n";
}
void task2()
{
	int firstNumber, secondNumber, NWD, devinded;
	std::cout << "podaj pierwsz¹ liczbê\n";
	std::cin >> firstNumber;
	std::cout << "podaj drug¹ liczbê\n";
	std::cin >> secondNumber;
	NWD = 1;
	devinded = 2;
	int tmpfirstNumber, tmpsecondNumber = secondNumber;
	while (tmpfirstNumber >= devinded
		&& tmpsecondNumber % devinded == 0)
	{
		if (tmpfirstNumber % devinded == 0
			&& tmpsecondNumber % devinded == 0)
		{
			tmpfirstNumber = tmpfirstNumber / devinded;
			tmpsecondNumber /= devinded;
			NWD *= devinded;
		}
		else
			devinded++;
	}
	std::cout << "NWD = " << NWD << "\n";




	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
	NWD = a;
	std::cout << "NWD = " << NWD << "\n";
}
void task3()
{

	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;
	//wersja 1
	//obliczam iloœæ cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//liczê 10 do potêgi numberOfDigit - 1
	//liczê 10 do potêgi (numberOfDigit - 1)
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		@@ - 152, 11 + 152, 27 @@ void task3()
			int leftNumber = number;
		int rightNumber = number;

		bool isPalindrome = true;
		while (leftNumber > 10)
		{
			int leftDigit = leftNumber / leftDivided;
			int rightDigit = rightNumber % rightDivided;
			if (leftDigit != rightDigit)
			{
				isPalindrome = false;
				break;
			}

			leftNumber = leftNumber % leftDivided;
			rightNumber = rightNumber / rightDivided;

			leftDivided = leftDivided / 10;
		}

		if (isPalindrome /*== true*/)
			std::cout << "Liczba jest palindromem\n";
		else
			std::cout << "Liczba nie jest palindromem\n";
}
	int main()
	{
		setlocale(LC_CTYPE, "polish");
		//task1();
		//task2();
		task3();
		
	}

