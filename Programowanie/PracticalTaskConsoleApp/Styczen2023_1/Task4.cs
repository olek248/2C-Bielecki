using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTaskConsoleApp.Styczen2023_1
{
    /*
     ***************************************************************************************************************************************************************
     Klasa: Notatka
    Opis: reprezentuje pojedynczą notatkę z tytułem i treścią. Umożliwia tworzenie notatek, ich numerowanie i wyświetlanie.
    
    Pola: Licznik - przechowuje liczbę wszystkich utworzonych notatek.
    id - przechowuje numer identyfikacyjny konkretnej notatki
    tytul - przechowuje tytul notatki
    tresc - przechowuje tresc notatki

    Metody:
    - Notatka - konstruktor, tworzy nowa notatkę.
    - Wyswietl() - wyświetla tytuł i treść notatki.
    - Diagnostyka() - pokazuje liczbe wszystkich utworzonych notatek.
    ***************************************************************************************************************************************************************
     */  
    internal class Notatka
    {
        private static int licznik = 0;
        private int id;

        private string tytul, tresc;

        public Notatka(string tytul, string tresc)
        {
            id = ++licznik;
            this.tytul = tytul;
            this.tresc = tresc;
        }

        public void Wyswietl()
        {
            Console.WriteLine($"[{id}] {tytul}: {tresc}");
        }

        public static void Diagnostyka()
        {
            Console.WriteLine($"Utworzono {licznik} notatki/ek.");
        }

        public static void task4()
        {
            var n1 = new Notatka("Zakupy", "Mleko, chleb, maslo");
            var n2 = new Notatka("Plan dnia", "Nauka i spacer z psem");

            n1.Wyswietl();
            n2.Wyswietl();
            Notatka.Diagnostyka();

            Console.ReadKey();
        }
    }
}
