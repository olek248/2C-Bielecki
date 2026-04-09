
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace LinqPracticalTasksConsoleApp
{

    /*
========================================
== POZIOM 1 – PODSTAWOWY ==
========================================

1. Znajdź wszystkie osoby z Krakowa.
2. Znajdź osoby pełnoletnie.
3. Posortuj osoby po wieku rosnąco.
4. Posortuj osoby po nazwisku malejąco.
5. Wypisz tylko imię i nazwisko każdej osoby.
6. Wypisz tylko miasta bez duplikatów.
7. Oblicz liczbę osób z Warszawy.
8. Oblicz średnią pensję wszystkich osób.
9. Znajdź najmłodszą osobę.
10. Sprawdź, czy jest ktoś z Gdańska.


========================================
== POZIOM 2 – ŚREDNI ==
========================================

11. Posortuj osoby po mieście, a w ramach miasta po pensji malejąco.
12. Znajdź osoby w wieku od 25 do 35 lat (włącznie).
13. Oblicz sumę pensji osób z Kielc.
14. Znajdź pierwszą osobę, której pensja jest większa niż 10 000.
15. Znajdź ostatnią osobę w kolejności alfabetycznej po nazwisku.
16. Wygeneruj dane osób w formacie: "Imię Nazwisko (Miasto)".
17. Sprawdź, czy wszyscy mają co najmniej 18 lat.
18. Policz, ile jest kobiet.
19. Znajdź osoby, które zarabiają więcej niż średnia pensja.
20. Znajdź najstarszą osobę z Krakowa.


========================================
== POZIOM 3 – ZAAWANSOWANY ==
========================================

22. Znajdź osoby, które mają skill "C#".
23. Znajdź osoby, które mają co najmniej trzy skille.
24. Znajdź osoby z Warszawy, posortuj je po wieku malejąco i wypisz tylko ich imię, nazwisko, wiek i pensję.
25. Sprawdź, czy ktoś ma skill "Azure".
26. Sprawdź, czy wszyscy zarabiają co najmniej 4000.
27. Znajdź osobę o największej pensji.
28. Znajdź osobę o najmniejszej pensji.
29. Wypisz osoby, które mają taki sam wiek jak najstarsza osoba.


========================================
== POZIOM 4 – EKSTRA / DLA CHĘTNYCH ==
========================================

32. Posortuj osoby według liczby posiadanych skilli.
33. Podziel osoby na dwie listy: zarabiających przynajmniej 8000 oraz zarabiających mniej niż 8000.
35. Przyporządkuj każdą osobę do przedziału wiekowego (np. 20–29, 30–39, 40–49) i wypisz osoby z każdego przedziału.

*/
    internal class Task1
    {
        void Print<T>(string title, IEnumerable<T> data)
        {
            Console.WriteLine($"\n=== {title} ===");
            foreach (var item in data)
                Console.WriteLine(item);
        }

        public void DoTask()
        {
            var people = new List<Person>
        {
            new Person() { Id=1, FirstName="Anna",  LastName="Nowak",    Age=29, Gender=Gender.Female, City="Kielce", Salary=8200m,  Skills=["C#", "LINQ", "SQL"] },
            new() { Id=2, FirstName="Marek", LastName="Kowalski", Age=43, Gender=Gender.Male,   City="Warszawa", Salary=15000m, Skills=["Azure", "C#", "DevOps"] },
            new() { Id=3, FirstName="Ewa",   LastName="Wiśniewska",Age=35, Gender=Gender.Female, City="Kraków", Salary=9800m,  Skills=["JavaScript", "React"] },
            new() { Id=4, FirstName="Jan",   LastName="Zieliński", Age=43, Gender=Gender.Male,   City="Gdańsk", Salary=12000m, Skills=["C#", "SQL"] },
            new() { Id=5, FirstName="Ola",   LastName="Maj",       Age=26, Gender=Gender.Female, City="Kielce", Salary=7200m,  Skills=["Python", "ML"] },
            new() { Id=6, FirstName="Piotr", LastName="Lewandowski",Age=37,Gender=Gender.Male,   City="Warszawa", Salary=13400m, Skills=["C#", "LINQ", "Azure"] },
            new() { Id=7, FirstName="Iga",   LastName="Kowal",     Age=31, Gender=Gender.Female, City="Kraków", Salary=9900m,  Skills=["Go", "Kubernetes"] },
            new() { Id=8, FirstName="Tomek", LastName="Sikora",    Age=29, Gender=Gender.Male,   City="Kielce", Salary=8800m,  Skills=["C#", "MAUI", "Bluetooth"] },
        };

            // === POZIOM 1 ===
            /*
            // Zadanie 1
            var q1 = people.Where(p => p.City == "Kraków");
            Print("Zadanie 1", q1);

            // Zadanie 2
            var q2 = people.Where(p => p.Age >= 18);
            Print("Zadanie 2", q2);

            // Zadanie 3
            var q3 = people.OrderBy(p => p.Age);
            Print("Zadanie 3", q3);

            // Zadanie 4
            var q4 = people.OrderByDescending(p => p.LastName);
            Print("Zadanie 4", q4);
            
            // Zadanie 5
            var q5 = people.Select(p => new { p.FirstName, p.LastName });
            Print("Zadanie 5", q5);
            
            //Zadanie 6
            var q6 = people.Select(p => p.City).Distinct();
            Print("Zadanie 6", q6);
            
            //Zadanie 7
            var q7 = people.Count(p => p.City == "Warszawa").ToString();
            Print("Zadanie 7: Liczba osob z warszawy:", q7);
            
            //Zadanie 8
            var q8 = people.Average(p => p.Salary);
            Console.WriteLine(q8);
            
            //Zadanie 9
            var q9 = people.OrderBy(p => p.Age).FirstOrDefault();
            Console.WriteLine(q9);
            
            //Zadanie 10
            bool czyJestKtosZGdanska = people.Any(p => p.City == "Gdańsk");

            if(czyJestKtosZGdanska)
            {
                Console.WriteLine("Zadanie 10: Tak, na liście jest przynajmniej jedna osoba z Gdańska");
            }
            else
            {
                Console.WriteLine("Zadanie 10: Nie, nikt na liście nie mieszka w Gdańsku");
            }
            
            //Zadanie 11
            var q11 = people.OrderBy(p => p.City).ThenByDescending(p => p.Salary);
            Print("Zadanie11", q11);
            
            //Zadanie 12
            var q12 = people.Where(p => p.Age >= 25 && p.Age <= 35);
            Print("Zadanie 12:", q12);
            
            //Zadanie 13
            var q13 = people.Sum(p => p.City == "Kielce" ? p.Salary : 0);
            Console.WriteLine($"Zadanie 13 {q13}");
            
            //Zadanie 14
            var q14 = people.Where(p => p.Salary > 10000).First();
            Console.WriteLine($"Zadanie 14 {q14}");

            //Zadanie 15
            var q15 = people.OrderBy(p => p.LastName).LastOrDefault();
            Console.WriteLine($"Zadanie 15 {q15}");

            //Zadanie 16
            var q16 = people.Select(p => new { FirstAndSecondName = $"{p.FirstName} {p.LastName}", Town = "(" + p.City + " )" });
            Print("Zadanie 16", q16);

            //Zadanie 17
            var q17 = people.All(p => p.Age >= 18);
            Console.WriteLine($"Zadanie 17 {q17}");

            //Zadanie 18
            var q18 = people.Count(p => p.Gender == Gender.Female);
            Console.WriteLine($"Zadanie 18 {q18}");
            
            //Zadanie 19
            var q19 = people.Where(p => p.Salary > people.Average(p => p.Salary));
            Print("Zadanie 19", q19);

            //Zadanie 20
            var q20 = people.Where(p => p.City == "Kraków").OrderByDescending(p => p.Age).First();
            Console.WriteLine("Zadanie 20", q20);

            //Zadanie 22
            var q22 = people.Where(p => p.Skills.Contains("C#"));
            Print("Zadanie 22", q22);
            
            //Zadanie 23
            var q23 = people.Where(p => p.Skills.Count() >= 3);
            Print("Zadanie 23", q23);

            //Zadanie 24
            var q24 = people.Where(p => p.City == "Warszawa").OrderByDescending(p => p.Age).Select(p => $"{p.FirstName} {p.LastName}, {p.Age} lat, {p.Salary} zł");
            Print("Zadanie 24", q24);

            //Zadanie 25
            var q25 = people.Count(p => p.Skills.Contains("Azure")) > 0;
            Console.WriteLine($"Zadanie 25 {q25.ToString()}");

            //Zadanie 26
            var q26 = people.All(p => p.Salary >= 4000);
            Console.WriteLine($"Zadanie 26 {q26.ToString()}");

            //Zadanie 27
            var q27 = people.OrderByDescending(p => p.Salary).First();
            Console.WriteLine($"Zadanie 27 {q27.ToString()}");

            //Zadanie 28
            var q28 = people.OrderBy(p => p.Salary).First();
            Console.WriteLine($"Zadanie 28 {q28}");

            //Zadanie 29
            var q29 = people.Where(p => p.Age == people.Max(pp => pp.Age));
            Print("Zadanie 29", q29);
            */
          
        }
    }
}
