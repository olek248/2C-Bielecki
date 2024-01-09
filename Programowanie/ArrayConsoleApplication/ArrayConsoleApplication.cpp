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
int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}


