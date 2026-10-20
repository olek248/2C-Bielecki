namespace fiszkiMauiApp
{
    public class Flashcard
    {
        public string English { get; set; }
        public string Polish { get; set; }
    }

    public partial class MainPage : ContentPage
    {
        public List<Flashcard> Cards { get; set; } = new List<Flashcard>
        {
            new Flashcard { English = "apple", Polish = "jabłko" },
            new Flashcard { English = "house", Polish = "dom" },
            new Flashcard { English = "dog", Polish = "pies" },
            new Flashcard { English = "book", Polish = "książka" },
            new Flashcard { English = "bike", Polish = "rower" }
        };

        private Flashcard currentCard;
        public Flashcard CurrentCard
        {
            get => currentCard;
            set
            {
                currentCard = value;
                OnPropertyChanged();
                TranslationText = "";
            }
        }

        private int currentPosition;
        public int CurrentPosition
        {
            get => currentPosition;
            set
            {
                currentPosition = value;
                OnPropertyChanged();
            }
        }

        private string translationText = "";
        public string TranslationText
        {
            get => translationText;
            set
            {
                translationText = value;
                OnPropertyChanged();
            }
        }

        public Command ShowTranslationCommand { get; set; }
        public Command ResetCommand { get; set; }

        public MainPage()
        {
            ShowTranslationCommand = new Command(ShowTranslation);
            ResetCommand = new Command(ResetToStart);

            InitializeComponent();
        }

        private void ShowTranslation()
        {
            if (CurrentCard != null)
            {
                TranslationText = CurrentCard.Polish;
            }
        }

        private void ResetToStart()
        {
            CurrentPosition = 0;
            TranslationText = "";
        }
    }
}
