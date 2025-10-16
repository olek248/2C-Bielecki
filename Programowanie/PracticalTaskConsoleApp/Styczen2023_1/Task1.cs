namespace PracticalTaskConsoleApp.Styczen2023_1
{
    internal class Task1
    {
        public void task()
        {
            static int Nwd(int a, int b)
            {
                while (a != b)
                {
                    if (a > b)
                        a = a - b;
                    else
                        b = b - a;
                }
                return a;
            }

            Console.WriteLine("Podaj liczbę a: ");
            int a = int.Parse(Console.ReadLine());

            Console.WriteLine("Podaj liczbę b: ");
            int b = int.Parse(Console.ReadLine());

            if(a <= 0 || b <= 0)
                Console.WriteLine("podane liczby nie są dodatnie!!!");
            else
            {
                int wynik = Nwd(a, b);
                Console.WriteLine($"Największy wspólny dzielnik to: {wynik}");

            }
        
            /*
             *********************************************************************
             nazwa funkcji: Nwd
            opis funkcji: funkcja obliczna najwiekszy wspolny dzielnik liczby a i b
            parametry: a - paremetr przechowujacy wartosc pierwszej liczby
                       b - parametr przechowujacy wartosc drugiej liczby
            zwracany typ i opis: typ zwracany to int i zwracany jest najwiekszy wspolny dzielnik obu liczb
            ***************************************************************************
             */
         
        }
    }
}
