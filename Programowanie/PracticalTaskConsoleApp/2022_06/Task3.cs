using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTaskConsoleApp._2022_06
{
    internal class Osoba
    {
        public string imie;
        public int wiek;

        public Osoba()
        {
            imie = "Nieznane";
            wiek = 0;
        }

        public Osoba(string imie, int wiek)
        {
            this.imie = imie;
            this.wiek = wiek;
        }

        public void WyswietlDane()
        {
            Console.WriteLine($"Imię: {imie}, Wiek: {wiek}");
        }

        public static void task3()
        {
            Osoba osoba1 = new Osoba();
            Osoba osoba2 = new Osoba("Jan", 18);

            osoba1.WyswietlDane();
            osoba2.WyswietlDane();

            Console.ReadKey();
        }
    }
}
