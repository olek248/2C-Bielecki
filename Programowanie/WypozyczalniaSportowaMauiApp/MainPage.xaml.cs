namespace WypozyczalniaSportowaMauiApp
{
   
    public class EquipmentItem
    {
        public string Name { get; set; }
        public double PricePerDay { get; set; }
        public string DisplayText => $"{Name} - {PricePerDay} zł/dzień";
    }

    public partial class MainPage : ContentPage
    {
        public string CustomerName { get; set; }

        private double daysCount = 1;
        public double DaysCount
        {
            get => daysCount;
            set
            {
                daysCount = value;
                OnPropertyChanged();
            }
        }

        public bool HasInsurance { get; set; }

        public List<EquipmentItem> EquipmentList { get; set; } = new List<EquipmentItem>
        {
            new EquipmentItem { Name = "Rower", PricePerDay = 40 },
            new EquipmentItem { Name = "Hulajnoga", PricePerDay = 30 },
            new EquipmentItem { Name = "Rolki", PricePerDay = 20 },
            new EquipmentItem { Name = "Kajak", PricePerDay = 50 }
        };

        public EquipmentItem SelectedEquipment { get; set; }

        public Command CalculateCommand { get; set; }

        private string summaryText;
        public string SummaryText
        {
            get => summaryText;
            set
            {
                summaryText = value;
                OnPropertyChanged();
            }
        }

        public MainPage()
        {
            CalculateCommand = new Command(CalculateRentalCost);
            InitializeComponent();
        }

        private void CalculateRentalCost()
        {
           
            if (string.IsNullOrWhiteSpace(CustomerName))
            {
                SummaryText = "Wpisz imię i nazwisko klienta!";
                return;
            }

            if (SelectedEquipment == null)
            {
                SummaryText = "Wybierz sprzęt z listy!";
                return;
            }

           
            double equipmentCost = DaysCount * SelectedEquipment.PricePerDay;
            double insuranceCost = HasInsurance ? (DaysCount * 5) : 0;
            double totalCost = equipmentCost + insuranceCost;

           
            SummaryText = $"Klient: {CustomerName}\n" +
                          $"Sprzęt: {SelectedEquipment.Name}\n" +
                          $"Liczba dni: {DaysCount}\n" +
                          $"Ubezpieczenie: {(HasInsurance ? "TAK" : "NIE")}\n" +
                          $"Koszt sprzętu: {DaysCount} × {SelectedEquipment.PricePerDay} zł = {equipmentCost} zł\n" +
                          $"Ubezpieczenie: {DaysCount} × 5 zł = {insuranceCost} zł\n" +
                          $"Łącznie: {totalCost} zł";
        }
    }
}
