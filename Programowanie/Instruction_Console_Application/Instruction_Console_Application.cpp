

#include <iostream>

/*
operatorzy warunkowe:
> - wiêksze
< - mniejsze
>= - wiêksze b¹dŸ równe
<= - mniejsze b¹dŸ równe
== - równe
!= - róŸne
operatorzy logiczne:
&& - AND
|| - OR
! - not


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
	/*
	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	if (rest != 0) // rest == 1
		std::cout << "liczba jest nieparzysta\n";
		*/
	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	else
		std::cout << "liczba jest nieparzysta\n";
}

//napisz program, który wyœwietli informacje czy liczba jest z zakresu: <1 ; 10).
void task3()
{
	
	int number;
	std::cout << "podaj liczbe:\n";
	std::cin >> number;
	/*
	if (number >= 1)
	{
		if (number < 10)
			std::cout << "liczba jest w przedziale\n";
		else
			std::cout << "liczba jest poza zakresu\n";
	}
	else
		std::cout << "liczba jest poza zakresu\n";
	*/
	
	if (number >= 1 && number < 10)
		std::cout << "twoja liczba jest w przedziale\n";
	else
		std::cout << "twoja liczba jest poza przedzia³em\n";
}

//napisz program ktory wykona dzielenie dwoch liczb
void task4()
{
	float firstNumber, secondNumber;
	std::cout << "podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "podaj druga liczbe\n";
	std::cin >> secondNumber;
	if (secondNumber != 0)
	{
		float quoitent = firstNumber / secondNumber;
		std::cout << "wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "dzielenie przez zero!!!\n";
}



/*
*. Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
*. Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.
*. Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI (Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
*. Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe. Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.
*. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)

*/


//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "podaj druga liczbe\n";
	std::cin >> secondNumber;
	if (firstNumber == secondNumber)
		std::cout << "liczby sa rowne\n";
	else
		std::cout << "liczby sa rozne\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
void task6()
{
	int wiek;
	std::cout << "podaj swoj wiek\n";
	std::cin >> wiek;
	if (wiek >= 18)
		std::cout << "jestes pelnioletni\n";
	else
		std::cout << "jestes nieletni\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
void task7()
{
	int liczba_ca³kowita, wartoœæ_bezwzglêdna;
	std::cout << "podaj liczbe ca³kowit¹\n";
	std::cin >> liczba_ca³kowita;
	if (liczba_ca³kowita > 0)
		wartoœæ_bezwzglêdna = liczba_ca³kowita;
	else
		wartoœæ_bezwzglêdna = liczba_ca³kowita * -1;
	std::cout << wartoœæ_bezwzglêdna;
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task8()
{
	int dzieñ;
	std::cout << "podaj liczbe dnia w tygodniu\n";
	std::cin >> dzieñ;
	if (dzieñ == 1)
		std::cout << "dziœ jest poniedzia³ek\n";
	if (dzieñ == 2)
		std::cout << "dziœ jest wtorek\n";
	if (dzieñ == 3)
		std::cout << "dziœ jest œroda\n";
	if (dzieñ == 4)
		std::cout << "dziœ jest czwartek\n";
	if (dzieñ == 5)
		std::cout << "dziœ jest pi¹tek\n";
	if (dzieñ == 6)
		std::cout << "dziœ jest sobota\n";
	if (dzieñ == 7)
		std::cout << "dziœ jest niedziela\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.
void task9()
{
	int pierwsza_ca³kowita, druga_ca³kowita;

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
	task9();

}




