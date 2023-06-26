#include<locale.h>
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<windows.h>
using namespace std;


void MENU()
{
	HANDLE kolor;
	kolor = GetStdHandle(STD_OUTPUT_HANDLE);                // zielony
	SetConsoleTextAttribute(kolor, FOREGROUND_GREEN);
	setlocale(LC_CTYPE, "C");
	cout << endl << endl;
	char poz = 0xCD;                // ramka
	cout << "		" << char(0xC9) << setw(24) << setfill(poz) << char(0xBB) << endl;
	cout << "		" << char(0xBA) << " PI" << char(0x9D) << "KARSKA BAZA DANYCH " << char(0xBA) << endl;
	cout << "		" << char(0xC8) << setw(24) << setfill(poz) << char(0xBC) << endl << endl << endl;

	setlocale(LC_CTYPE, "Polish");             // polskie znaki
	cout << " Wprowadzenie: " << endl;
	cout << " W bazie zawarto informacje dotycz¹ce klubów pi³karskich z subiektywnie wybranych lig." << endl;
	cout << " Po wyjœciu z ekranu menu wyœwietla siê lista wyboru ligi. Wybór nastêpuje przez klikniêcie numeru przypisanego do ligi."  << endl;
	cout << " Nastêpnie program wyœwietla listê klubów przypisanych do wybranej ligi - wybór przez klikniêcie przypisanej litery." << endl;
	cout << " Baza danych zawiera informacje takie jak:" << endl;
	cout << " - pe³na nazwa klubu" << endl;
	cout << " - miasto, z którego jest klub" << endl;
	cout << " - przydomek klubu" << endl;
	cout << " - rok za³o¿enia" << endl;
	cout << " - nazwa stadionu" << endl;
	cout << " - pojemnoœæ stadionu" << endl;
	cout << " - imiê i nzawisko trenera" << endl;
	cout << " - imiê i nazwisko kapitana dru¿yny (C)" << endl << endl;
	cout << " Przypisane klawisze:"<< endl;
	cout << " [Backspace] - Powrót do strony startowej" << endl;
	cout << " [Enter] - PrzejdŸ do menu lig" << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << " * Baza danych zawiera informacje zgodne z dniem 23.01.2021 - informacje nie s¹ na bie¿¹co aktualizowane." << endl;
	cout << " Symbolem (F) oznaczone s¹ kluby, które regularnie obserwujê i ogl¹dam. :)" << endl;
}

void LIGI()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz ligê: " << endl;
	cout << "1. Premier League (ENG 1)" << endl;
	cout << "2. La Liga (ESP 1)" << endl;
	cout << "3. Bundesliga (GER 1)" << endl;
	cout << "4. Serie A (ITA 1)" << endl;
	cout << "5. Ligue 1 (FRA 1)" << endl;
	cout << "6. Primeira Liga (POR 1)" << endl;
	cout << "7. Super Lig (TUR 1)" << endl;
	cout << "8. Championship (ENG 2)" << endl;
	cout << "9. Eredivisie (NED 1)" << endl;
	cout << "0. Ekstraklasa (POL 1)" << endl; 
	cout << endl;
}

void ENG1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " English Premier League 2020/2021:" << endl;
	cout << "a. Arsenal" << endl;
	cout << "b. Aston Villa" << endl;
	cout << "c. Brighton & Hove Albion" << endl;
	cout << "d. Burnley" << endl;
	cout << "e. Chelsea" << endl;
	cout << "f. Crystal Palace" << endl;
	cout << "g. Everton" << endl;
	cout << "h. Fulham" << endl;
	cout << "i. Leeds United" << endl;
	cout << "j. Leicester City" << endl;
	cout << "k. Liverpool" << endl;
	cout << "l. Manchester City" << endl;
	cout << "m. Manchester United" << endl;
	cout << "n. Newcastle United" << endl;
	cout << "o. Sheffield United" << endl;
	cout << "p. Southampton" << endl;
	cout << "r. Tottenham" << endl;
	cout << "s. West Brom" << endl;
	cout << "t. West Ham United" << endl;
	cout << "u. Wolverhampton" << endl;
}
void ESP1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " La Liga Santander 2020/2021:" << endl;
	cout << "a. Athletic Bilbao" << endl;
	cout << "b. Atletico Madrid" << endl;
	cout << "c. Osasuna" << endl;
	cout << "d. Cadiz" << endl;
	cout << "e. Deportivo Alaves" << endl;
	cout << "f. Elche" << endl;
	cout << "g. FC Barcelona" << endl;
	cout << "h. Getafe" << endl;
	cout << "i. Granada" << endl;
	cout << "j. Levante" << endl;
	cout << "k. Celta Vigo" << endl;
	cout << "l. Real Betis" << endl;
	cout << "m. Real Madrid" << endl;
	cout << "n. Real Sociedad" << endl;
	cout << "o. Real Valladolid" << endl;
	cout << "p. SD Eibar" << endl;
	cout << "r. Huesca" << endl;
	cout << "s. Sevilla" << endl;
	cout << "t. Valencia" << endl;
	cout << "u. Villarreal (F)" << endl;
}
void ITA1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " Serie A TIM 2020/2021:" << endl;
	cout << "a. Atalanta Bergamo" << endl;
	cout << "b. Benevento" << endl;
	cout << "c. Bologna" << endl;
	cout << "d. Cagliari" << endl;
	cout << "e. Crotone" << endl;
	cout << "f. Spezia" << endl;
	cout << "g. Fiorentina" << endl;
	cout << "h. AS Roma" << endl;
	cout << "i. Genoa" << endl;
	cout << "j. Hellas Verona" << endl;
	cout << "k. Inter Mediolan" << endl;
	cout << "l. Lazio Rzym (F)" << endl;
	cout << "m. AC Milan" << endl;
	cout << "n. Napoli" << endl;
	cout << "o. Parma" << endl;
	cout << "p. Juventus Turyn" << endl;
	cout << "r. Sampdoria" << endl;
	cout << "s. Sassuolo" << endl;
	cout << "t. Torino" << endl;
	cout << "u. Udinese" << endl;
}
void GER1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " Bundesliga 2020/2021:" << endl;
	cout << "a. FC Koln" << endl;
	cout << "b. Union Berlin" << endl;
	cout << "c. Mainz 05" << endl;
	cout << "d. Arminia Bielefeld" << endl;
	cout << "e. Bayer Leverkusen" << endl;
	cout << "f. Bayern Monachium" << endl;
	cout << "g. Borussia Dortmund (F)" << endl;
	cout << "h. Borussia Monchengladbach" << endl;
	cout << "i. Eintracht Frankfurt" << endl;
	cout << "j. FC Augsburg" << endl;
	cout << "k. Schalke 04" << endl;
	cout << "l. Hertha Berlin" << endl;
	cout << "m. RB Lipsk" << endl;
	cout << "n. SC Freiburg" << endl;
	cout << "o. Hoffenheim" << endl;
	cout << "p. VfB Stuttgart" << endl;
	cout << "r. VfL Wolfsburg" << endl;
	cout << "s. Werder Brema" << endl;
}
void FRA1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " Ligue 1 Uber Eats 2020/2021:" << endl;
	cout << "a. Angers" << endl;
	cout << "b. AS Monaco" << endl;
	cout << "c. AS Saint-Etienne" << endl;
	cout << "d. Dijon" << endl;
	cout << "e. FC Lorient" << endl;
	cout << "f. FC Metz" << endl;
	cout << "g. FC Nantes" << endl;
	cout << "h. Bordeaux" << endl;
	cout << "i. LOSC Lille" << endl;
	cout << "j. Montpellier (F)" << endl;
	cout << "k. Nimes Olympique" << endl;
	cout << "l. OGC Nice" << endl;
	cout << "m. Olympique Marsylia" << endl;
	cout << "n. Olympique Lyon" << endl;
	cout << "o. Paris Saint-Germain" << endl;
	cout << "p. RC Lens" << endl;
	cout << "r. Strasbourg" << endl;
	cout << "s. Stade Brest" << endl;
	cout << "t. Stade de Reims" << endl;
	cout << "u. Stade Rennais" << endl;
}
void ENG2()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " EFL Championship 2020/2021:" << endl;
	cout << "a. Barnsley" << endl;
	cout << "b. Birmingham City" << endl;
	cout << "c. Blackburn Rovers" << endl;
	cout << "d. Bournemouth" << endl;
	cout << "e. Brentford" << endl;
	cout << "f. Bristol City" << endl;
	cout << "g. Cardiff City" << endl;
	cout << "h. Coventry City" << endl;
	cout << "i. Derby County" << endl;
	cout << "j. Huddersfield" << endl;
	cout << "k. Luton Town" << endl;
	cout << "l. Middlesbrough" << endl;
	cout << "m. Millwall" << endl;
	cout << "n. Norwich City (F)" << endl;
	cout << "o. Nottingham Forest" << endl;
	cout << "p. Preston North End" << endl;
	cout << "r. Queens Park Rangers" << endl;
	cout << "s. Reading" << endl;
	cout << "t. Rotherham United" << endl;
	cout << "u. Sheffield Wednesday" << endl;
	cout << "w. Stoke City" << endl;
	cout << "y. Swansea City" << endl;
	cout << "z. Watford" << endl;
	cout << "x. Wycombe Wanderers" << endl;
}
void POR1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " Primeira Liga NOS 2020/2021:" << endl;
	cout << "a. Belenenses" << endl;
	cout << "b. Boavista" << endl;
	cout << "c. SC Braga (F)" << endl;
	cout << "d. Famalicao" << endl;
	cout << "e. Farense" << endl;
	cout << "f. FC Porto" << endl;
	cout << "g. Gil Vicente" << endl;
	cout << "h. Maritimo" << endl;
	cout << "i. Moreirense" << endl;
	cout << "j. CD Nacional" << endl;
	cout << "k. Pacos de Ferreira" << endl;
	cout << "l. Portimonense" << endl;
	cout << "m. Rio Ave" << endl;
	cout << "n. Santa Clara" << endl;
	cout << "o. Benfica Lizbona" << endl;
	cout << "p. Sporting Lizbona" << endl;
	cout << "r. Tondela" << endl;
	cout << "s. Vitoria Guimaraes" << endl;
}
void TUR1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " Super Lig 2020/2021:" << endl;
	cout << "a. Alanyaspor" << endl;
	cout << "b. Antalyaspor" << endl;
	cout << "c. Erzurumspor" << endl;
	cout << "d. Besiktas Stambu³" << endl;
	cout << "e. Caykur Rizespor" << endl;
	cout << "f. Denizlispor" << endl;
	cout << "g. Fatih Karagumruk" << endl;
	cout << "h. Fenerbahce" << endl;
	cout << "i. Galatasaray (F)" << endl;
	cout << "j. Gaziantep FK" << endl;
	cout << "k. Genclerbirligi" << endl;
	cout << "l. Goztepe" << endl;
	cout << "m. Hatayspor" << endl;
	cout << "n. Istanbul Basaksehir" << endl;
	cout << "o. Kasimpasa" << endl;
	cout << "p. Kayserispor" << endl;
	cout << "r. Konyaspor" << endl;
	cout << "s. Ankaragucu" << endl;
	cout << "t. Sivasspor" << endl;
	cout << "u. Trabzonspor" << endl;
	cout << "w. Yeni Malatyaspor" << endl;
}
void NED1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " Eredivisie 2020/2021:" << endl;
	cout << "a. ADO Den Haag" << endl;
	cout << "b. Ajax Amsterdam" << endl;
	cout << "c. AZ Alkmaar" << endl;
	cout << "d. FC Emmen" << endl;
	cout << "e. FC Groningen" << endl;
	cout << "f. FC Twente" << endl;
	cout << "g. FC Utrecht" << endl;
	cout << "h. Feyenoord Rotterdam" << endl;
	cout << "i. Fortuna Sittard" << endl;
	cout << "j. Heracles Almelo" << endl;
	cout << "k. PEC Zwolle" << endl;
	cout << "l. PSV Eindhoven (F)" << endl;
	cout << "m. RKC Waalwijk" << endl;
	cout << "n. sc Heerenveen" << endl;
	cout << "o. Sparta Rotterdam" << endl;
	cout << "p. Vitesse" << endl;
	cout << "r. VVV Venlo" << endl;
	cout << "s. Willem II" << endl;
}
void POL1()
{
	setlocale(LC_CTYPE, "Polish");
	cout << " Wybierz klub: " << endl;
	cout << " PKO BP Ekstraklasa 2020/2021:" << endl;
	cout << "a. Cracovia" << endl;
	cout << "b. Górnik Zabrze" << endl;
	cout << "c. Jagiellonia Bia³ystok" << endl;
	cout << "d. Lech Poznañ" << endl;
	cout << "e. Lechia Gdañsk" << endl;
	cout << "f. Legia Warszawa" << endl;
	cout << "g. Piast Gliwice" << endl;
	cout << "h. Podbeskidzie Bielsko-Bia³a (F)" << endl;
	cout << "i. Pogoñ Szczecin" << endl;
	cout << "j. Raków Czêstochowa" << endl;
	cout << "k. Œl¹sk Wroc³aw" << endl;
	cout << "l. Stal Mielec" << endl;
	cout << "m. Warta Poznañ" << endl;
	cout << "n. Wis³a Kraków" << endl;
	cout << "o. Wis³a P³ock" << endl;
	cout << "p. Zag³êbie Lubin" << endl;
}