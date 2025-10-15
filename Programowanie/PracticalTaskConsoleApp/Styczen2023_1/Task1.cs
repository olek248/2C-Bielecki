namespace PracticalTaskConsoleApp.Styczen2023_1
{
    internal class Task1
    {
        public void task()
        {
            Console.WriteLine("Podaj liczbę a: ");
            int a = int.Parse(Console.ReadLine());

            Console.WriteLine("Podaj liczbę b: ");
            int b = int.Parse(Console.ReadLine());
            int nwd(int a,  int b)
            {
                while (a != b)
                {
                    if (a > b)
                    {
                        a = a - b;
                    }
                    else
                    {
                        b = b - a;
                    }
                }
            }
            Console.WriteLine($"NWD = {a}");
        }
    }
}
