/*
Zadanie – Kalkulator kosztu zamówienia
Napisz aplikację w .NET MAUI, która pozwala obliczyć koszt prostego zamówienia.

Aplikacja powinna zawierać:
- pole Nazwa produktu (Entry),
- pole Cena za sztukę (Entry),
- wybór liczby sztuk za pomocą kontrolki Stepper (od 1 do 10),
- Label wyświetlający aktualnie wybraną liczbę sztuk,
- przełącznik Dostawa ekspresowa (Switch),
- przycisk Oblicz,
- Label wyświetlający podsumowanie zamówienia i końcową cenę.

Zasady obliczeń:
Koszt zamówienia oblicz według wzoru:
cena za sztukę × liczba sztuk
Jeśli użytkownik włączy dostawę ekspresową, do ceny zamówienia należy doliczyć 15 zł.

Przykład:
Produkt: Słuchawki
Cena za sztukę: 120 zł
Liczba sztuk: 3
Dostawa ekspresowa: TAK  
Wynik: 375 zł



Dla chętnych: zamiast przełącznika dostawy ekspresowej dodaj Picker, który pozwala wybrać sposób dostawy:
- Odbiór osobisty – 0 zł
- Kurier – 12 zł
- Paczkomat – 10 zł
Wybrany sposób dostawy uwzględnij podczas obliczania końcowej ceny zamówienia.
*/


namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public string ProductName { get; set; }

        public string UnitPriceText { get; set; }

        private double quantity = 1;
        public double Quantity
        {
            get => quantity;
            set
            {
                quantity = value;
                OnPropertyChanged();
            }
        }

        public List<string> DeliveryMethods { get; set; } = new List<string>
        {
            "Odbiór osobisty (0 zł)",
            "Paczkomat (10 zł)",
            "Kurier (12 zł)"
        };

        public string SelectedDelivery { get; set; }

        public Command CalculateCommand { get; set; }

        private string resultMessage;
        public string ResultMessage
        {
            get => resultMessage;
            set
            {
                resultMessage = value;
                OnPropertyChanged();
            }
        }

        public MainPage()
        {
            CalculateCommand = new Command(CalculateOrderCost);
            InitializeComponent();
        }

        private void CalculateOrderCost()
        {
            if (string.IsNullOrWhiteSpace(ProductName))
            {
                ResultMessage = "Wpisz nazwę produktu!";
                return;
            }

            if (!double.TryParse(UnitPriceText, out double unitPrice) || unitPrice <= 0)
            {
                ResultMessage = "Wpisz poprawną cenę za sztukę!";
                return;
            }

            if (string.IsNullOrWhiteSpace(SelectedDelivery))
            {
                ResultMessage = "Wybierz sposób dostawy!";
                return;
            }

            double deliveryCost = 0;

            if (SelectedDelivery.Contains("Paczkomat"))
            {
                deliveryCost = 10;
            }
            else if (SelectedDelivery.Contains("Kurier"))
            {
                deliveryCost = 12;
            }

            double totalCost = (unitPrice * Quantity) + deliveryCost;

            ResultMessage = $"Podsumowanie zamówienia:\n" +
                            $"Produkt: {ProductName}\n" +
                            $"Liczba sztuk: {Quantity}\n" +
                            $"Dostawa: {SelectedDelivery}\n" +
                            $"Razem do zapłaty: {totalCost:F2} zł";
        }
    }
}