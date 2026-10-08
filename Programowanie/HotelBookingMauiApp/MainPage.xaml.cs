namespace HotelBookingMauiApp
{
    public partial class MainPage : ContentPage
    {
        public string GuestName { get; set; }

        public string ContactEmail { get; set; }

        public DateTime CheckInDate { get; set; } = DateTime.Today;

        public DateTime EarliestDate
        {
            get { return DateTime.Today; }
        }

        private double stayDuration = 1;
        public double StayDuration
        {
            get { return stayDuration; }
            set
            {
                stayDuration = value;
                OnPropertyChanged();
            }
        }

        private double guestCount = 1;
        public double GuestCount
        {
            get { return guestCount; }
            set
            {
                guestCount = value;
                OnPropertyChanged();
            }
        }

        public List<string> RoomTypes { get; set; } = new List<string>
        {
            "Pokój jednoosobowy",
            "Pokój dwuosobowy",
            "Apartament"
        };

        public string SelectedRoomType { get; set; }

        public bool HasBreakfast { get; set; }

        public bool HasParking { get; set; }

        private double promoDiscount;
        public double PromoDiscount
        {
            get { return promoDiscount; }
            set
            {
                promoDiscount = value;
                OnPropertyChanged();
            }
        }

        public Command CalculateCommand { get; set; }

        private string bookingSummary;

        public string Message
        {
            get { return bookingSummary; }
            set
            {
                bookingSummary = value;
                OnPropertyChanged();
            }
        }

        public MainPage()
        {
            CalculateCommand = new Command(CalculateBookingCost);

            InitializeComponent();
        }

        private void CalculateBookingCost()
        {
            if (string.IsNullOrWhiteSpace(GuestName))
            {
                Message = "Błąd: Wprowadź imię i nazwisko zamawiającego.";
                return;
            }

            if (string.IsNullOrWhiteSpace(ContactEmail))
            {
                Message = "Błąd: Podaj adres e-mail do kontaktu.";
                return;
            }

            if (string.IsNullOrWhiteSpace(SelectedRoomType))
            {
                Message = "Błąd: Wybierz opcję zakwaterowania.";
                return;
            }

            double baseRoomRate = 0;

            if (SelectedRoomType == "Pokój jednoosobowy")
            {
                baseRoomRate = 200;
            }
            else if (SelectedRoomType == "Pokój dwuosobowy")
            {
                baseRoomRate = 300;
            }
            else if (SelectedRoomType == "Apartament")
            {
                baseRoomRate = 500;
            }

            double totalRoomCost = StayDuration * baseRoomRate;

            double totalBreakfastCost = 0;

            if (HasBreakfast)
            {
                totalBreakfastCost = StayDuration * GuestCount * 40;
            }

            double totalParkingCost = 0;

            if (HasParking)
            {
                totalParkingCost = StayDuration * 30;
            }

            double grossTotal = totalRoomCost + totalBreakfastCost + totalParkingCost;

            double calculatedDiscount = grossTotal * PromoDiscount / 100;

            double netTotal = grossTotal - calculatedDiscount;

            Message = $"PODSUMOWANIE REZERWACJI HOTELEJ\n" +
                      $"----------------------------------------\n" +
                      $"Klient: {GuestName}\n" +
                      $"E-mail: {ContactEmail}\n" +
                      $"Data przyjazdu: {CheckInDate:dd/MM/yyyy}\n" +
                      $"Wybrany pokój: {SelectedRoomType}\n" +
                      $"Czas pobytu: {StayDuration} nocy/noc\n" +
                      $"Liczba gości: {GuestCount}\n" +
                      $"Opcje dodatkowe:\n" +
                      $"  • Śniadanie: {(HasBreakfast ? "Tak" : "Brak")}\n" +
                      $"  • Parking: {(HasParking ? "Tak" : "Brak")}\n" +
                      $"Udzielony rabat: {PromoDiscount:F0}%\n" +
                      $"----------------------------------------\n" +
                      $"KWOTA DO ZAPŁATY: {netTotal:F2} zł";
        }
    }
}

/*
Zadanie – Rezerwacja pokoju hotelowego
Napisz aplikację w .NET MAUI, która pozwala przygotować prostą rezerwację pokoju hotelowego.

Użytkownik powinien podać następujące informacje:
- Imię i nazwisko – Entry,
- Adres e-mail – Entry,
- Data przyjazdu – DatePicker,
- Liczba nocy – Stepper (od 1 do 14),
- Liczba osób – Stepper (od 1 do 4),
- Rodzaj pokoju – Picker:
  - Pokój jednoosobowy – 200 zł / noc,
  - Pokój dwuosobowy – 300 zł / noc,
  - Apartament – 500 zł / noc,
- Śniadanie – Switch – dodatkowo 40 zł za osobę za każdą noc,
- Miejsce parkingowe – CheckBox – dodatkowo 30 zł za każdą noc,
- przycisk Oblicz koszt – Button,
- Label wyświetlający podsumowanie rezerwacji.

Aktualna liczba nocy oraz liczba osób powinna być wyświetlana obok odpowiednich kontrolek Stepper. Wykorzystaj do tego binding, tak aby wartości zmieniały się automatycznie.
Po naciśnięciu przycisku Oblicz koszt aplikacja powinna obliczyć całkowity koszt pobytu.

Przykład:
Imię i nazwisko: Jan Kowalski
Data przyjazdu: 15.10.2026
Liczba nocy: 3
Liczba osób: 2
Pokój: Pokój dwuosobowy
Śniadanie: TAK
Parking: TAK
Koszt pokoju: 3 × 300 zł = 900 zł
Śniadanie: 3 × 2 × 40 zł = 240 zł
Parking: 3 × 30 zł = 90 zł
Łącznie: 1230 zł
W podsumowaniu wyświetl imię i nazwisko klienta, datę przyjazdu, wybrany rodzaj pokoju, liczbę nocy, liczbę osób oraz całkowity koszt rezerwacji.

Dodatkowe wymagania:
- użytkownik nie może wybrać daty przyjazdu wcześniejszej niż dzisiejsza,
- przed wykonaniem obliczeń sprawdź, czy użytkownik podał imię i nazwisko oraz wybrał rodzaj pokoju,
- jeśli dane są niepoprawne lub niekompletne, wyświetl odpowiedni komunikat.

Dla chętnych: dodaj Slider pozwalający ustawić rabat od 0% do 20%. Aktualna wartość rabatu powinna być wyświetlana za pomocą Label i bindingu. Rabat należy uwzględnić w końcowej cenie rezerwacji.

*/
