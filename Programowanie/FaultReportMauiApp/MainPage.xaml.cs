using System.Globalization;

namespace FaultReportMauiApp
{
    public class NonEmptyTextConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            string text = value as string;
            return !string.IsNullOrWhiteSpace(text);
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }

    public partial class MainPage : ContentPage
    {
        private string faultDescription;
        public string FaultDescription
        {
            get => faultDescription;
            set
            {
                faultDescription = value;
                OnPropertyChanged();
            }
        }

        private string statusMessage;
        public string StatusMessage
        {
            get => statusMessage;
            set
            {
                statusMessage = value;
                OnPropertyChanged();
            }
        }

        public Command SendCommand { get; set; }

        public MainPage()
        {
            SendCommand = new Command(SendFaultReport);
            InitializeComponent();
        }

        private void SendFaultReport()
        {
            StatusMessage = "Zgłoszenie zostało wysłane pomyślnie!";
        }
    }
}