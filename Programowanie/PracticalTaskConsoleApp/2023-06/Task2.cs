using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTaskConsoleApp._2023_06
{
    /*
     *****************************************************************
     Klasa: Film
    Pola: tytul (string) - przechowuje nazwe filmu maksymalnie 20 znakow
    liczba wypozyczen (int) - przechowuje liczbe wypozyczen filmu
    *****************************************************************************************
    */
    internal class Film
    {


        private string tytul;
        private int liczbaWypozyczen;

        public void ustawTytul(string t)
        {
            if (t.Length <= 20) tytul = t;
            else Console.WriteLine("Tytuł za długi!");
        }

        public string PobierzTytul() => tytul;
        public int PobierzLiczbeWypozyczen() => liczbaWypozyczen;

        public void Inkrementuj() => liczbaWypozyczen++;



        public static void Task()
        {
            Film film = new Film();
            film.ustawTytul("Matrix");

            Console.WriteLine("Przed wypożyczeniem:");
            Console.WriteLine($"{film.PobierzTytul()} - {film.PobierzLiczbeWypozyczen()} wypożyczeń");

            film.Inkrementuj();

            Console.WriteLine("\n po wypożyczeniu:");
            Console.WriteLine($"{film.PobierzTytul()} - {film.PobierzLiczbeWypozyczen()} wypożyczeń");

            Console.ReadKey();
        }
    }
}




