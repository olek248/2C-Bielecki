#include <iostream>

//napisz program który wczyta np. 5 liczb, a nastêpnie wyœwietli je w odwrotnej kolejnoœci
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    //std::cin >> ARRAY_SIZE; // jest b³¹d!!!
    int numbers[ARRAY_SIZE];
    //numbers[2] = 70;

    /*
    std::cout << "Podaj dan¹\n";
    std::cin >> numbers[0];
    std::cout << "Podaj dan¹\n";
    std::cin >> numbers[1];
    std::cout << "Podaj dan¹\n";
    std::cin >> numbers[2];
    std::cout << "Podaj dan¹\n";
    std::cin >> numbers[3];
    std::cout << "Podaj dan¹\n";
    std::cin >> numbers[4];
    */
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Podaj dan¹\n";
        std::cin >> numbers[i];
    }

    std::cout << "Podane dane w odwrotnej kolejnoœci:\n";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}
void task2()
{
    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;

    const unsigned short ARRAY_SIZE = 3;
    int numbers[ARRAY_SIZE];

    srand(time(0));

    std::cout << "wylosowane liczby to:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";

    double sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }
    double avg = sum / ARRAY_SIZE;
    std::cout << "œrednia artmetyczna wynosi: " << avg << "\n";
}
void task3()
{
    {
        const unsigned short LOWER_RANGE = 0;
        const unsigned short UPPER_RANGE = 70;

        const unsigned short ARRAY_SIZE = 5;
        int numbers[ARRAY_SIZE];

        srand(time(0));

        std::cout << "wylosowane liczby to:\n";
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
            std::cout << numbers[i] << ", ";
        }
        std::cout << "\n";
    }

}
void task4()
{
    const long long UPPER_RANGE = 70;
    const long long UPPER_RANGE = 1000000;
    //wersja 2
    bool sieveOfEratosthenes[UPPER_RANGE + 1];

    for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
    {
        sieveOfEratosthenes[i] = true;
    }

    for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
    {
        if (sieveOfEratosthenes[number] /*== true*/)
        {
            for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
                sieveOfEratosthenes[numberToCrossOut] = false;
        }
    }

    for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
    {
        if (sieveOfEratosthenes[i] /*== true*/)
            std::cout << i << ", ";
    }
    std::cout << "\n";
}
void task5()
{
    const short LOWER_RANGE = 0;
    const short UPPER_RANGE = 70;
    
    const unsigned short ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];

    srand(time(0));
    std::cout << "wylosowane liczby to:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
    //----------------------------------------------------------------------------------------------------

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        int pom = numbers[i];

        int j;
        for (j = i - 1; j >= 0; j--)
        {
            numbers[j + 1] = numbers[j];
        }
        numbers[j + 1] = pom;
    }
    std::cout << "posortowane liczby: \n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}
long long calculateFactorial(long long n)
{
    long long factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

long long calculateFactorialV2(long long n)
{
    if (n <= 1)
        return 1;
    else
        return n * calculateFactorialV2(n - 1);
}
void task6()
{
    int number;
    std::cout << "podaj liczbê:\n";
    std::cin >> number;

    long long factorial = calculateFactorialV2(number);

    std::cout << "silnia jest rowna " << factorial << "\n";
}


int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    task6();
}


