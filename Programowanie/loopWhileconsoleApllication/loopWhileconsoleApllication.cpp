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
	int main()
	{
		setlocale(LC_CTYPE, "polish");
		//task1();
		task2();
		
	}

