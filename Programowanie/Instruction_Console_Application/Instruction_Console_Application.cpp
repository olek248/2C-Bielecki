

#include <iostream>

/*
DRY - dont't repeat yourself - nie powtarzaj siê
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
	int first_integer, second_integer;
	std::cout << "podaj pierwsz¹ liczbê\n";
	std::cin >> first_integer;
	std::cout << "podaj drug¹ liczbê\n";
	std::cin >> second_integer;
	if (first_integer > second_integer)
		std::cout << "pierwsza liczba jest wiêksza\n";
	else
		std::cout << "druga liczba jest wiêksza\n";
	if (first_integer == second_integer)
		std::cout << "liczby s¹ równe\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
void task10()
{
	int year;
	std::cout << "podaj rok\n";
	std::cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		std::cout << "rok jest przestêpny\n";
	else
		std::cout << "rok nie jest przestêpny\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task11()
{
	int number;
	std::cout << "podaj liczbê ca³kowit¹\n";
	std::cin >> number;
	if (number % 3 == 0 && number % 5 == 0)
		std::cout << "liczba jest podzielna zarówno przez 3  i 5\n";
	else
		std::cout << "liczba nie jest podzielna zarówno przez 3 i 5\n";
}


//Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach).Na podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
void task12()
{
	float body_weight, height, bmi;
	std::cout << "podaj mase cia³a w kilogramach\n";
	std::cin >> body_weight;
	std::cout << "podaj wzrost w metrach\n";
	std::cin >> height;
	bmi = body_weight / (height * height);
	if (bmi < 16.0)
		std::cout << "jesteœ wyg³odzony\n";
	if (bmi > 16.0 && bmi < 16.99)
		std::cout << "jesteœ wychudzony\n";
	if (bmi > 17.0 && bmi < 18.49)
		std::cout << "masz niedowagê\n";
	if (bmi > 18.5 && bmi < 24.99)
		std::cout << "masz prawid³ow¹ wagê\n";
	if (bmi > 25.0 && bmi < 29.9)
		std::cout << "masz nadwagê\n";
	if (bmi > 30.0 && bmi < 34.99)
		std::cout << "masz 1 stopieñ oty³oœci\n";
	if (bmi > 35.0 && bmi < 39.99)
		std::cout << "masz 2 stopieñ oty³oœci\n";
	if (bmi > 40.0)
		std::cout << "masz 3 stopieñ oty³oœci\n";
}


//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
void task13()
{
	int first_section, second_section, third_section;
	std::cout << "podaj d³ugóœæ pierwszego odcinka\n";
	std::cin >> first_section;
	std::cout << "podaj d³ugoœæ drugiego odcinka\n";
	std::cin >> second_section;
	std::cout << "podaj d³ugoœæ trzeciego odcinka\n";
	std::cin >> third_section;
}


//Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe. Wyœwietl wynik lub odpowiedni komunikat.
void task14()
{
	float number;
	std::cout << "podaj liczbe dodatni¹\n";
	std::cin >> number;
	if (number < 0)
		std::cout << "podaj liczbê dodatni¹\n";
	else
	{
		double root = sqrt(number);
		std::cout << "wynik to " << root;
	}
}


//Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
void task15()
{
	int day, month, year;
	std::cout << "Podaj dzieñ\n";
	std::cin >> day;
	std::cout << "Podaj miesi¹c\n";
	std::cin >> month;
	std::cout << "Podaj rok\n";
	std::cin >> year;

	if (day >= 1 && day <= 31
		&& month >= 1 && month <= 12
		&& month >= 1 && month <= 12
		&& year != 0

		&& ((month == 4 || month == 6 || month == 9 || month == 11) && day != 31)

		&& month == 2 && (day >= 28
			|| day == 29 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		&& month == 2 && (day >= 28
			|| day == 29 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		)
     
		std::cout << "Data " << day << "." << month << "." << year << " jest poprawna\n";
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
		//task13();
		//task14();
		//task15();
	}




