
Console.Write("Hello, World!\n");
Console.WriteLine("Hello word!");

string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("Witaj " + name + surname + " tutaj!!!!");
Console.WriteLine("Witaj {0} {1} tutaj!!!!!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj!!!!");

Console.WriteLine("Prędkość to km\\h");
Console.WriteLine(@"Prędkość to km\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine($"Pierwsza liczba to: {firstNumber}");
Console.WriteLine($"Druga liczbta to: {secondNumber}");

void ParametrTest_v1(int p)
{
    Console.WriteLine($"Parametr w ParametrTest_v1 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrTest_v1 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");
//ParametrTest_v1(99);
//tak