

#include <iostream>

/*
operatorzy warunkowe:
> - wiêksze
< - mniejsze
>= - wiêksze b¹dŸ równe
<= - mniejsze b¹dŸ równe
== - równe
!= - róŸne


*/
//napsiz program,który wyœwietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
			std::cout << "liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "liczba jest ujemna\n";

	if (number == 0)
		std::cout << "liczba jest równa zero\n";
	
	std::cout << "kolejna instrukcja\n";
}

//napisz program, który wyœwietli czy liczba jest parzysta czy nie parzysta
void task2()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;
	
	int rest = number % 2;
	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	if (rest != 0) // rest == 1
		std::cout << "liczba jest nieparzysta\n";

}









int main()
{
	//task1();
	task2();

}




