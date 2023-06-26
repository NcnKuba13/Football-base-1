#include<iostream>
#include<iomanip>
#include<thread>
#include<cmath>
#include<string>
#include<bitset>
#include<locale.h>
#include<conio.h>
#include<cstdlib>
#include"g³ówne.h"
using namespace std;

// budowa struktury
struct KLUB
{
	string nazwa;
	string miasto;
	string przydomek;
	unsigned int rok;
	string stadion;
	unsigned int pojemnosc;
	string trener;
	string kapitan;
	void info();
};

void KLUB::info()
{
	std::cout << "**************************************************" << std::endl;
	std::cout << nazwa << std::endl;
	std::cout << "Miasto: " << miasto << std::endl;
	std::cout << "Przydomek: " << przydomek << std::endl;
	std::cout << "Rok za³o¿enia: " << rok << std::endl;
	std::cout << "Stadion: " << stadion << std::endl;
	std::cout << "Pojemnoœæ stadionu: " << pojemnosc << std::endl;
	std::cout << "Trener: " << trener << std::endl;
	std::cout << "Kapitan (C): " << kapitan << std::endl;
	std::cout << "**************************************************" << std::endl;
}

int main()
{
	
	MENU();

	// struktury

	// Premier League
	KLUB ARS = { "Arsenal Football Club", "Londyn", "The Gunners (Kanonierzy)", 1886, "Emirates Stadium", 60704, "Mikel Arteta", "Pierre-Emerick Aubameyang" };

	KLUB AST = { "Aston Villa Football Club", "Birmingham", "The Villans", 1874, "Villa Park", 42749, "Dean Smith", "Jack Grealish" };

	KLUB BHA = { "Brighton & Hove Albion Football Club", "Brighton", "The Seagulls (Mewy)", 1901, "Falmer Stadium", 30750, "Graham Potter", "Lewis Dunk" };

	KLUB BUR = { "Burnley Football Club", "Burnley", "The Clarets", 1882, "Turf Moor", 21944, "Sean Dyche", "Ben Mee" };

	KLUB CHE = { "Chelsea Football Club", "Londyn", "The Blues", 1905, "Stamford Bridge", 40834, "Frank Lampard", "Cesar Azpilicueta" };

	KLUB CRY = { "Crystal Palace Football Club", "Londyn", "The Eagles (Or³y)", 1905, "Selhurst Park", 25486, "Roy Hogdson", "Luka Milivojeviæ" };

	KLUB EVE = { "Everton Football Club", "Liverpool", "The Toffees", 1878, "Goodison Park", 39414, "Carlo Ancelotti", "Seamus Coleman" };

	KLUB FUL = { "Fulham Football Club", "Londyn", "The Cottagers (Wieœniacy)", 1879, "Craven Cottage", 19359, "Scott Parker", "Tom Cairney" };

	KLUB LEE = { "Leeds United Football Club", "Leeds", "The Peacocks (Pawie)", 1919, "Elland Road", 37792, "Marcelo Bielsa", "Liam Cooper" };

	KLUB LEI = { "Leicester City Football Club", "Leicester", "The Foxes (Lisy)", 1884, "King Power Stadium", 32261, "Brendan Rodgers", "Wes Morgan" };

	KLUB LFC = { "Liverpool Football Club", "Liverpool", "The Reds", 1892, "Anfield", 53394, "Jurgen Klopp", "Jordan Henderson" };

	KLUB MNC = { "Manchester City Football Club", "Manchester", "The Citizens (Obywatele)", 1880, "City of Manchester Stadium", 55017, "Pep Guardiola", "Fernandinho" };

	KLUB MNU = { "Manchester United Football Club", "Manchester", "Red Devils (Czerwone Diab³y)", 1878, "Old Trafford", 74140, "Ole Gunnar Solskjaer", "Harry Maguire" };

	KLUB NEW = { "Newcastle United Football Club", "Newcastle upon Tyne", "The Magpies (Sroki)", 1892, "St. James' Park", 52305, "Steve Bruce", "Jamaal Lascelles" };

	KLUB SHU = { "Sheffield United Football Club", "Sheffield", "The Blades (Szabelki)", 1889, "Bramall Lane", 32050, "Chris Wilder", "Billy Sharp" };

	KLUB SOT = { "Southampton Football Club", "Southampton", "The Saints (Œwiêci)", 1885, "St. Mary's Stadium", 32384, "Ralph Hasenhuttl", "James Ward-Prowse" };

	KLUB TOT = { "Tottenham Hotspur Football Club", "Londyn", "Spurs", 1882, "Tottenham Hotspur Stadium", 62303, "Jose Mourinho", "Hugo Lloris" };

	KLUB WBA = { "West Bromwich Albion Football Club", "West Bromwich", "The Baggies", 1878, "The Hawthorns", 26688, "Sam Allardyce", "Jake Livermore" };

	KLUB WHU = { "West Ham United Football Club", "Londyn", "The Hammers (M³oty)", 1895, "London Stadium", 60000, "David Moyes", "Mark Noble" };

	KLUB WOL = { "Wolverhampton Wanderers Football Club", "Wolverhampton", "Wolves (Wilki)", 1877, "Molineux Stadium", 32050, "Nuno Espirito Santo", "Conor Coady" };
	
	// La Liga
	KLUB ATH = { "Athletic Club", "Bilbao", "Los Leones (Lwy)", 1898, "San Mames", 53289, "Marcelino", "Iker Muniain" };

	KLUB ATM = { "Club Atletico de Madrid", "Madryt", "Los Colchoneros", 1903, "Wanda Metropolitano", 68456, "Diego Simeone", "Koke" };

	KLUB BAR = { "Futbol Club Barcelona", "Barcelona", "Blaugrana", 1899, "Camp Nou", 99354, "Ronald Koeman", "Lionel Messi" };

	KLUB CAD = { "Cadiz Club de Futbol", "Kadyks", "La Banda", 1910, "Estadio Ramon de Carranza", 20724, "Alvaro Cervera", "Alberto Cifuentes" };

	KLUB CEL = { "Real Club Celta de Vigo", "Vigo", "Celticos (Celci)", 1923, "Estadio Balaidos", 29000, "Eduardo Coudet", "Hugo Mallo" };

	KLUB DAL = { "Deportivo Alaves", "Vitoria-Gasteiz", "Babazorros (Worki Bobu)", 1921, "Estadio de Mendizorroza", 19840, "Pablo Machin", "Manu Garcia" };

	KLUB EIB = { "Sociedad Deportiva Eibar", "Eibar", "Los Armeros (Rusznikarze)", 1940, "Estadio Municipal de Ipurua", 8164, "Jose Luis Mendilibar", "Sergi Enrich" };

	KLUB ELC = { "Elche club de Futbol", "Elche", "Los Ilicitanos", 1923, "Estadio Manuel Martinez Valero", 33732, "Jorge Almiron", "Nino" };

	KLUB GET = { "Getafe Club de Futbol", "Getafe", "Azulones", 1983, "Coliseum Alfonso Perez", 17000, "Jose Bordalas", "Dakonam Djene" };

	KLUB GRA = { "Granada Club de Futbol", "Granada", "Nazaries", 1931, "Estadio Nuevo Los Carmenes", 19336, "Diego Martinez", "Victor Diaz" };

	KLUB HUE = { "Sociedad Deportiva Huesca", "Huesca", "Oscenses", 1960, "Estadio El Alcoraz", 7638, "Juan Jose Rojo Martin", "Jorge Puido" };

	KLUB LEV = { "Levante Union Deportiva", "Walencja", "Granotas (¯aby)", 1909, "Estadi Ciutat de Valencia", 26354, "Paco Lopez", "Jose Luis Morales" };

	KLUB OSA = { "Club Atletico Osasuna", "Pampeluna", "Gorritxoak", 1920, "Estadio El Sadar", 23576, "Jagoba Arrasate", "Oier" };

	KLUB BET = { "Real Betis Belompie", "Sewilla", "Los Verdiblancos", 1907, "Estadio Benito Villamarin", 60720, "Manuel Pellegrini", "Joaquin" };

	KLUB RMA = { "Real Madrid Club de Futbol", "Madryt", "Los Galacticos", 1902, "Estadio Santiago Bernabeu", 81044, "Zinedine Zidane", "Sergio Ramos" };

	KLUB RSO = { "Real Sociedad de Futbol", "San Sebastian", "Txuri-urdinak", 1909, "Estadio Anoeta", 39500, "Imanol Alguacil", "Asier Illaramendi" };

	KLUB VLD = { "Real Valladolid Club de Futbol", "Valladolid", "Pucelanos", 1928, "Estadio Jose Zorilla", 27846, "Sergio Gonzalez", "Javi Moyano" };

	KLUB SEV = { "Sevilla Futbol Club", "Sewilla", "Los Nervionenses", 1890, "Estadio Ramon Sanchez Pizjuan", 43883, "Julen Lopetegui", "Jesus Navas" };

	KLUB VAL = { "Valencia Club de Futbol", "Walencja", "Los Murcielagos (Nietoperze)", 1919, "Estadio Mestalla", 48600, "Javi Gracia", "Jose Gaya" };

	KLUB VIL = { "Villarreal Club de Futbol", "Vila-real", "El Submarino Amarillo (¯ó³ta ³ódŸ podwodna)", 1923, "Estadio de la Ceramica", 23500, "Unai Emery", "Mario Gaspar" };

	// Bundesliga
	KLUB KOL = { "1. Fussball-Club Koln", "Kolonia", "Die Geissbocke (Koz³y)", 1948, "RheinEnergieStadion", 50000, "Markus Gisdol", "Jonas Hector" };

	KLUB MAI = { "1. Fussball- und Sport-Verein Mainz 05", "Moguncja", "Die Nullfuenfer (Zero-Pi¹tki)", 1905, "Opel Arena", 34034, "Bo Svensson", "Danny Latza" };

	KLUB BIE = { "Deutscher Sportclub Arminia Bielefeld", "Bielefeld", "Die Arminen", 1905, "SchucoArena", 27300, "Uwe Neuhaus", "Fabian Klos" };

	KLUB AUG = { "Fussball-Club Augsburg 1907", "Augsburg", "Fuggerstadter", 1907, "WWK Arena", 30660, "Heiko Herrlich", "Jeffrey Gouweleeuw" };

	KLUB LVA = { "Bayer 04 Leverkusen Fussball", "Leverkusen", "Die Apotheker (Aptekarze)", 1904, "BayArena", 30810, "Peter Bosz", "Charles Aranguiz" };

	KLUB BMU = { "Fussball-Club Bayern Munchen", "Monachium", "Die Bayern (Bawarczycy)", 1900, "Allianz Arena", 75000, "Hans-Dieter Flick", "Manuel Neuer" };

	KLUB DOR = { "Ballspielverein Borussia 09 Dortmund", "Dortmund", "Die Schwarzgelben", 1909, "Westfalenstadion", 81365, "Edin Terziæ", "Marco Reus" };

	KLUB MGL = { "Borussia Verein fur Leibesubungen 1900 Monchengladbach", "Monchengladbach", "Die Fohlen (rebaki)", 1900, "Borussia-Park", 54022, "Marco Rose", "Lars Stindl" };

	KLUB FRA = { "Eintracht Frankfurt", "Frankfurt nad Menem", "Die Adler (Or³y)", 1899, "Deutsche Bank Park", 51500, "Adi Hutter", "Makoto Hasebe" };

	KLUB FRG = { "Sport-Club Freiburg", "Fryburg Bryzgowijski", "Breisgau-Brasilianer", 1904, "Schwarzwald-Stadion", 24000, "Christian Streich", "Christian Gunter" };

	KLUB HER = { "Hertha Berliner Sport-Club", "Berlin", "Die Alte Dame (Stara Dama)", 1892, "Olympiastadion", 74649, "Bruno Labbadia", "Niklas Stark" };

	KLUB HOF = { "Turn- und Sportgemeinschaft 1899 Hoffenheim", "Sinsheim", "Dorfverein (Wieœniaki)", 1899, "Rhein-Neckar-Arena", 30150, "Sebastian Hoeness", "Benjamin Hubner" };

	KLUB RBL = { "RasenBallsport Leipzig", "Lipsk", "Die Roten Bullen (Czerwone Byki)", 2009, "Red Bull Arena", 42959, "Julian Nagelsmann", "Marcel Sabitzer" };

	KLUB S04 = { "Fussballclub Gelsenkirchen-Schalke 04", "Gelsenkirchen", "Die Knappen (Czeladnicy)", 1904, "Veltins-Arena", 62271, "Christian Gross", "Omar Mascarell" };

	KLUB STU = { "Verein fur Bewegungsspiele Stuttgart 1893", "Stuttgart", "Die Schwaben (Szwaby)", 1893, "Mercedes-Benz Arena", 60449, "Pellegrino Matarazzo", "Meik-Oliver Kempf" };

	KLUB UNB = { "1. Fussballclub Union Berlin", "Berlin", "Die Eisernen (¯elaŸni)", 1966, "Stadion An der Alten Forsterei", 22012, "Urs Fischer", "Christopher Trimmel" };

	KLUB WER = { "Sportverein Werder Bremen 1899", "Brema", "Die Grun-Weissen", 1899, "Weserstadion", 42100, "Florian Kohfeldt", "Niklas Moisander" };

	KLUB WLF = { "Verein fur Leibesubungen Wolfsburg", "Wolfsburg", "Die Wolfe (Wilki)", 1945, "Volkswagen Arena", 30000, "Oliver Glasner", "Josuha Guilavogui" };

	// Serie A
	KLUB ATA = { "Atalanta Bergamasca Calcio", "Bergamo", "La Dea (Bogini)", 1907, "Gewiss Stadium", 21300, "Gian Piero Gasperini", "Rafael Toloi" };

	KLUB BNV = { "Benevento Calcio", "Benewent", "Gli Stregoni (Czarownicy)", 1929, "Stadio Ciro Vigorito", 16867, "Filippo Inzaghi", "Christian Maggio" };

	KLUB BOL = { "Bologna Football Club 1909", "Bolonia", "Rossoblu", 1909, "Stadio Renato Dall'Ara", 38279, "Sinisa Mihajloviæ", "Andrea Poli" };

	KLUB CAG = { "Cagliari Calcio", "Cagliari", "Gli Isolani", 1920, "Sardegna Arena", 16233, "Eusebio Di Francesco", "Luca Ceppitelli" };

	KLUB FIO = { "Associazione Calcio Firenze Fiorentina", "Florencja", "Viola", 1926, "Stadio Artemio Franchi", 43147, "Cesare Prandelli", "German Pezzella" };

	KLUB GEN = { "Genoa Cricket and Football Club", "Genua", "Il Grifone (Gryfy)", 1893, "Stadio Luigi Ferraris", 36599, "Davide Ballardini", "Domenico Criscito" };

	KLUB HEL = { "Hellas Verona Football Club", "Werona", "Gialloblu", 1903, "Stadio Marc'Antonio Bentegodi", 39371, "Ivan Juriæ", "Miguel Veloso" };

	KLUB INT = { "Football Club Internazionale Milano", "Mediolan", "Nerazzurri", 1908, "San Siro", 78275, "Antonio Conte", "Samir Handanovic" };

	KLUB JUV = { "Juventus Football Club", "Turyn", "La Vecchia Signora (Stara Dama)", 1897, "Juventus Stadium", 41507, "Andrea Pirlo", "Giorgio Chiellini" };

	KLUB LAZ = { "Societa Sportiva Lazio", "Rzym", "Biancocelesti", 1900, "Stadio Olimpico", 70634, "Simone Inzaghi", "Senad Luliæ" };

	KLUB MIL = { "Associazione Calcio Milan", "Mediolan", "Rossoneri", 1899, "San Siro", 78275, "Stefano Pioli", "Alessio Romagnoli" };

	KLUB NAP = { "Societa Sportiva Calcio Napoli", "Neapol", "I Partenopei", 1926, "Stadio Diego Armando Maradona", 54726, "Gennaro Gattuso", "Lorenzo Insigne" };

	KLUB PAR = { "Parma Calcio 1913", "Parma", "I Crociati (Krzy¿owcy)", 1913, "Stadio Ennio Tardini", 22359, "Roberto D'Aversa", "Bruno Alves" };

	KLUB ROM = { "Associazione Sportiva Roma", "Rzym", "Giallorossi", 1927, "Stadio Olimpico", 70634, "Paolo Fonseca", "Edin Dzeko" };

	KLUB SAM = { "Unione Calcio Sampdoria", "Genua", "La Samp", 1946, "Stadio Luigi Ferraris", 36599, "Claudio Ranieri", "Fabio Quagliarella" };

	KLUB SAS = { "Unione Sportiva Sassuolo Calcio", "Sassuolo", "Neroverdi", 1920, "Mapei Stadium - Citta del Tricolore", 21584, "Roberto De Zerbi", "Francesco Magnanelli" };

	KLUB SPE = { "Spezia Calcio 2008", "La Spezia", "Aquilotti (Orze³ki)", 1906, "Stadio Alberto Picco", 10336, "Vincenzo Italiano", "Claudio Terzi" };

	KLUB TOR = { "Torino Football Club", "Turyn", "Il Toro (Byk)", 1906, "Stadio Olimpico Grande Torino", 27958, "Davide Nicola", "Andrea Belotti" };

	KLUB UDI = { "Udinese Calcio", "Udine", "Le Zebrette (Zebry)", 1896, "Stadio Friuli", 25144, "Luca Gotti", "Rodrigo De Paul" };

	KLUB CRO = { "Football Club Crotone", "Crotone", "Gli Squali (Rekiny)", 1910, "Satdio Ezio Scida", 16547, "Giovanni Stroppa", "Alex Cordaz" };

	// Ligue 1
	KLUB ANG = { "Angers Sporting Club de l'Ouest", "Angers", "Les Scoistes", 1919, "Stade Raymond Kopa", 18752, "Stephane Moulin", "Ismael Traore" };

	KLUB BOR = { "Football Club des Girondins de Bordeaux", "Bordeaux", "Les Girondins (¯yrondyœci)", 1881, "Matmut Atlantique", 42115, "Jean-Louis Gasset", "Laurent Koœcielny" };

	KLUB BRS = { "Stade Brestois 29", "Brest", "Les Pirates (Piraci)", 1903, "Stade Francis Le Ble", 15931, "Olivier Dall'Oglio", "Jean-Kevin Duverne" };

	KLUB DIJ = { "Dijon Football Cote-d'Or", "Dijon", "Les Hiboux (Sowy)", 1998, "Stade Gaston Gerard", 15995, "David Linares", "Bruno Ecuele Manga" };

	KLUB RCL = { "Le Racing Club de Lens", "Lens", "Le Artesiens", 1906, "Stade Bollaert-Delelis", 38223, "Franck Haise", "Yannick Cahuzac" };

	KLUB LIL = { "Lille Olympique Sporting Club", "Lille", "Les Dogues (Mastify)", 1944, "Stade Pierre Mauroy", 50186, "Christophe Galtier", "Jose Fonte" };

	KLUB LOR = { "Fotball Club Lorient-Bretagne Sud", "Lorient", "Les Merlus (Morszczuki)", 1926, "Stade du Moustoir", 18890, "Christophe Pelissier", "Fabien Lemoine" };

	KLUB LYO = { "Olympique Lyonnais", "Lyon", "Les Gones (Dzieci)", 1899, "Groupama Stadium", 59186, "Rudi Garcia", "Memphis Depay" };

	KLUB OMA = { "Olympique de Marseille", "Marsylia", "Les Phoceens", 1899, "Stade Velodrome", 67394, "Andre Villas-Boas", "Steve Mandanda" };

	KLUB MET = { "Football Club de Metz", "Metz", "Les Grenats", 1932, "Stade Saint-Symphorien", 25636, "Frederic Antonetti", "John Boye" };

	KLUB ASM = { "Association Sportive de Monaco Football Club", "Monako", "Les Monegasques", 1924, "Stade Louis II", 18523, "Niko Kovac", "Wissam Ben Yedder" };

	KLUB MHS = { "Montpellier Herault Sport Club", "Montpellier", "Le Paillade", 1919, "Stade de la Mosson", 32900, "Michel Der Zakarian", "Vitorino Hilton" };

	KLUB NNT = { "Football Club de Nantes Atlantique", "Nantes", "Les Canaris (Kanarki)", 1943, "Stade de la Beaujoire", 35322, "Christian Gourcuff", "Abdoulaye Toure" };

	KLUB NIC = { "Olympique Gymnaste Club de Nice-Cote d'Azur", "Nicea", "Les Aiglons (Or³y)", 1904, "Allianz Riviera", 36178, "Adrian Ursea", "Dante" };

	KLUB NIM = { "Nimes Olympique Football Club", "Nimes", "Les Crocodiles (Krokodyle)", 1937, "Stade des Costieres", 18482, "Jerome Arpinon", "Anthony Briancon" };

	KLUB PSG = { "Paris Saint-Germain Football Club", "Pary¿", "Le Parisiens (Pary¿anie)", 1970, "Parc des Princes", 47929, "Mauricio Pochettino", "Marquinhos" };

	KLUB REI = { "Stade de Reims", "Reims", "Remois", 1931, "Stade Auguste Delaune", 21029, "David Guion", "Yunis Abdelhamid" };

	KLUB REN = { "Stade Rennais Football Club", "Rennes", "Les Rouges et Noirs", 1901, "Roazhon Park", 29778, "Julien Stephan", "Damien Da Silva" };

	KLUB STE = { "Association Sportive de Saint-Etienne Loire", "Saint-Etienne", "Les Verts", 1933, "Stade Geoffroy Guichard", 41965, "Claude Puel", "Mathieu Debuchy" };

	KLUB RCS = { "Racing Club de Strasbourg Alsace", "Strasburg", "Le Racing", 1906, "Stade de la Meinau", 26280, "Thierry Laurey", "Stefan Mitroviæ" };

	// Liga NOS
	KLUB BEL = { "Clube de Futebol Os Belenenses", "Lizbona", "A Cruz de Cristo (Zakon Krzy¿a Portugalii)", 1919, "Estadio Nacional do Jamor", 37593, "Petit", "Silvestre Varela" };

	KLUB BEN = { "Sport Lisboa e Benfica", "Lizbona", "As Aguias (Or³y)", 1904, "Estadio da Luz", 64642, "Jorge Jesus", "Jardel" };

	KLUB BOA = { "Boavista Futebol Clube", "Porto", "As Panteras (Pantery)", 1903, "Estadio do Bessa", 28263, "Jesualdo Ferreira", "Javi Garcia" };

	KLUB BRA = { "Sporting Clube de Braga", "Braga", "Os Arcebispos (Arcybiskupi)", 1921, "Estadio Municipal de Braga", 30286, "Carlos Carvalhal", "Fransergio" };

	KLUB FAM = { "Futebol Clube de Famalicao", "Vila Nova de Famalicao", "Fama", 1931, "Estadio Municipal 22 de Junho", 5307, "Joao Pedro Sousa", "Gustavo Assuncao" };

	KLUB FRN = { "Sporting Clube Farense", "Faro", "Os Leoes do Algarve (Lwy z Algarve)", 1910, "Estadio de Sao Luis", 12000, "Sergio Vieira", "Cassio Scheid" };

	KLUB GVI = { "Gil Vicente Futebol Clube", "Barcelos", "Galos (Koguty)", 1924, "Estadio Cidade de Barcelos", 12504, "Ricardo Soares", "Ruben Fernandes" };

	KLUB MAR = { "Club Sport Maritimo", "Funchal", "Os Verde-Rubros", 1910, "Estadio do Maritimo", 10932, "Milton Mendes", "Edgar Costa" };

	KLUB NAC = { "Clube Desportivo Nacional", "Funchal", "Os Alvinegros", 1910, "Estadio da Madeira", 5132, "Luis Freire", "Ruben Micael" };

	KLUB MOR = { "Moreirense Futebol Clube", "Guimaraes", "Os verdes e brancos", 1938, "Parque Moreira de Conegos", 9000, "Vasco Seabra", "Joao Aurelio" };

	KLUB PAC = { "Futebol Clube Pacos de Ferreira", "Pacos de Ferreira", "Os Castores (Bobry)", 1950, "Estadio da Mata Real", 9077, "Pepa", "Marcelo" };

	KLUB PRM = { "Portimonense Sporting Clube", "Portimao", "Marafados", 1914, "Estadio Municipal de Portimao", 9544, "Paulo Sergio", "Dener" };

	KLUB POR = { "Futebol Clube de Porto", "Porto", "Dragoes (Smoki)", 1893, "Estadio do Dragao", 50033, "Sergio Conceicao", "Pepe" };

	KLUB RAV = { "Rio Ave Futebol Clube", "Vila do Conde", "Rio Grande", 1939, "Estadio dos Arcos", 12815, "Pedro Cunha", "Tarantini" };

	KLUB SCL = { "Clube Desportivo Santa Clara", "Ponta Delagada", "Os Acoreaonos (Azorczycy)", 1927, "Estadio de sao Miguel", 13277, "Daniel Ramos", "Osama Rashid" };

	KLUB SCP = { "Sporting Clube de Portugal", "Lizbona", "Leoes (Lwy)", 1906, "Estadio Jose Alvalade", 50095, "Ruben Amorim", "Sebastian Coates" };

	KLUB TON = { "Clube Desportivo de Tondela", "Tondela", "Auriverdes", 1933, "Estadio Joao Cardoso", 5000, "Pako Ayestaran", "Ricardo Alves" };

	KLUB VGU = { "Vitoria Sport Clube", "Guimaraes", "Os Conquistadores (Zdobywcy)", 1922, "Estadio D. Afonso Henriques", 30146, "Joao Henriques", "Andre Andre" };

	// Super Lig
	KLUB ALA = { "Aytemiz Alanyaspor", "Alanya", "Turuncu-Yesil", 1948, "Bahcesehir Okullari Stadyumu", 10842, "Cagdas Atan", "Efecan Karaca" };

	KLUB MKE = { "Makina ve Kimya Endustrisi Ankaragucu Genclik ve Spor Kulubu", "Ankara", "Kupa beyi (Serca)", 1910, "Eryaman Stadyumu", 20560, "Mustafa Dalci", "Korcan Celikay" };

	KLUB ANT = { "Antalyaspor Kulubu", "Antalya", "Akrepler (Skorpiony)", 1966, "Antalya Arena", 32539, "Ersun Yanal", "Hakan Ozmert" };

	KLUB BES = { "Besiktas Jimnastik Kulubu", "Stambu³", "Kara Kartallar (Czarne Or³y)", 1903, "Vodafone Park", 41903, "Sergen Yalcin", "Atiba Hutchinson" };

	KLUB BBE = { "Buyuksehir Belediye Erzurumspor", "Erzurum", "Dadaslar", 2010, "Kazim Karabekir Stadyumu", 21374, "Mesut Bakkal", "Ibrahim Akdag" };

	KLUB CAY = { "Caykur Rizespor Kulubu", "Rize", "Karadeniz Atmacasi (Krogulce Czarnomorskie)", 1953, "Yeni Rize Sehir Stadi", 15558, "Stjepan Tomas", "Orhan Ovacikli" };

	KLUB DEN = { "Denizlispor Kulubu", "Denizli", "Horozlar (Koguty)", 1966, "Denizli Ataturk Stadyumu", 18745, "Yalcin Kosukavak", "Hugo Rodallega" };

	KLUB KAR = { "Fatih Karagumruk Spor Kulubu Sportif Faaliyelter", "Stambu³", "Kara Kirmizi", 1926, "Ataturk Olimpiyat Stadi", 76761, "Senol Can", "Alparslan Erdem" };

	KLUB FEN = { "Fenerbahce Spor Kulubu", "Stambu³", "Sari Kanaryalar (¯ó³te kanarki)", 1907, "Sukru Saracoglu Stadyumu", 50530, "Erol Bulut", "Gokhan Gonul" };

	KLUB GAL = { "Galatasaray Spor Kulubu", "Stambu³", "Aslanlar (Lwy)", 1905, "Turk Telekom Stadyumu", 52650, "Fatih Terim", "Fernando Muslera" };

	KLUB GAZ = { "Gazisehir Gaziantep Futbol Kulubu", "Gaziantep", "GFK", 1999, "Gaziantep Arena", 35574, "Ricardo Sa Pinto", "Gunay Guvenc" };

	KLUB GNC = { "Genclerbirligi Spor Kulubu", "Ankara", "Ankara Ruzgari (Wiatr Ankary)", 1923, "Eryaman Stadyumu", 20560, "Mustafa Kaplan", "Stephane Sessegnon" };

	KLUB GOZ = { "Goztepe Spor Kulubu", "Izmir", "Goz Goz", 1925, "Gursel Aksel Stadyumu", 20040, "Yasun Guleryuz", "Halil Akbunar" };

	KLUB HAT = { "Hatayspor Kulubu", "Antiochia", "Guneyin Yildizi (Gwiazda Po³udnia)", 1967, "Antakya Ataturk Stadyumu", 8765, "Omer Erdogan", "Mesut Caytemel" };

	KLUB BAS = { "Istanbul Medipol Basaksehir Futbol Kulubu", "Stambu³", "IBFK", 2014, "Fatih Terim Stadyumu", 17319, "Okan Buruk", "Mahmut Tekdemir" };

	KLUB KAS = { "Kasimpasa Spor Kulubu", "Stambu³", "Apaciler (Apache)", 1921, "Recep Tayyip Erdogan", 14234, "Fuat Capa", "Ramazan Kose" };

	KLUB KAY = { "Kayserispor Kulubu", "Kayseri", "Anadolu Yildizi (Anatolijska Gwiazda)", 1966, "Kadir Has Stadyumu", 32864, "Dan Petrescu", "Cristian Sapunaru" };

	KLUB KON = { "Atiker Konyaspor Kulubu", "Konya", "Yesil Simsekler (Zielone B³yskawice)", 1922, "Konya Buyuksehir Belediye Stadyumu", 42000, "Ismail Kartal", "Omer Ali Sahiner" };

	KLUB SIV = { "Demir Grup Sivasspor Kulubu", "Sivas", "Yigidolar", 1967, "Yeni Sivas 4 Eylul Stadyumu", 27532, "Riza Calimbay", "Ziya Erdal" };

	KLUB TRA = { "Trabzonspor Profesyonel Futbol Takimi", "Trabzon", "Karadeniz Firtinasi (Sztorm na Morzu Czarnym)", 1967, "Medical Park Stadyumu", 40782, "Abdullah Avci", "Joao Pereira" };

	KLUB YMS = { "Yeni Malatyaspor Kulubu", "Malatya", "Kaplanlar (Tygrysy)", 1986, "Yeni Malatya Stadyumu", 25745, "Hamza Hamzaoglu", "Adem Buyuk" };

	// Championship
	KLUB BOU = { "Athletic Football Club Bournemouth", "Bournemouth", "The Cherries (Wisienki)", 1899, "Dean Court", 11364, "Jason Tindall", "Steve Cook" };

	KLUB BNS = { "Barnsley Football Club", "Barnsley", "The Tykes", 1887, "Oakwell", 23287, "Valerien Ismael", "Alex Mowatt" };

	KLUB BIR = { "Birmingham City Football Club", "Birmingham", "The Blues", 1875, "St. Andrew's Trillion Trophy Stadium", 29409, "Aitor Karanka", "Harlee Dean" };

	KLUB BLA = { "Blackburn Rovers Football Club", "Blackburn", "Rovers (Wêdrowcy)", 1875, "Ewood Park", 31367, "Tony Mowbray", "Elliott Bennett" };

	KLUB BRN = { "Brentford Football Club", "Londyn", "The Bees (Pszczo³y)", 1889, "Brentford Community Stadium", 17250, "Thomas Frank", "Pontus Jansson" };

	KLUB BRI = { "Bristol City Football Club", "Bristol", "The Robins (Rudziki)", 1894, "Ashton Gate", 27000, "Dean Holden", "Tomas Kalas" };

	KLUB CAR = { "Cardiff City Association Football Club", "Cardiff", "The Bluebirds", 1899, "Cardiff City Stadium", 33316, "Neil Harris", "Sean Morrison" };

	KLUB COV = { "Coventry City Football Club", "Coventry", "The Sky Blues", 1883, "St. Andrew's Trillion Trophy Stadium", 29409, "Mark Robins", "Liam Kelly" };

	KLUB DER = { "Derby County Football Club", "Derby", "The Rams (Barany)", 1884, "Pride Park Stadium", 33597, "Wayne Rooney", "David Marshall" };

	KLUB HUD = { "Huddersfield Town Association Football Club", "Huddersfield", "The Terriers (Teriery)", 1908, "Kirklees Stadium", 24121, "Carlos Corberan", "Christopher Schindler" };

	KLUB LUT = { "Luton Town Football Club", "Luton", "The Hatters", 1885, "Kenilworth Road", 10356, "Nathan Jones", "Sonny Bradley" };

	KLUB MID = { "Middlesbrough Football Club", "Middlesbrough", "The Boro", 1876, "Riverside Stadium", 34000, "Neil Warnock", "Britt Assombalonga" };

	KLUB MLL = { "Millwall Football Club", "Londyn", "The Lions (Lwy)", 1885, "The Den", 20146, "Gary Rowett", "Alex Pearce" };

	KLUB NOR = { "Norwich City Football Club", "Norwich", "The Cannaries (Kanarki)", 1902, "Carrow Road", 27359, "Daniel Farke", "Grant Hanley" };

	KLUB NOT = { "Nottingham Forest Football Club", "Nottingham", "Tricky Trees", 1865, "The City Ground", 30446, "Chris Hughton", "Michael Dawson" };

	KLUB PNE = { "Preston North End Football Club", "Preston", "The Lilywhites", 1880, "Deepdale", 23404, "Alex Neil", "Alan Browne" };

	KLUB QPR = { "Queens Park Rangers Football Club", "Londyn", "The Hoops", 1882, "Kiyan Prince Foundation Stadium", 18439, "Mark Warburton", "Geoff Cameron" };

	KLUB REA = { "Reading Football Club", "Reading", "The Royals (Królewscy)", 1871, "Madejski Stadium", 24161, "Veljko Paunoviæ", "Liam Moore" };

	KLUB ROT = { "Rotherham United Football Club", "Rotherham", "The Millers", 1925, "New York Stadium", 12021, "Paul Warne", "Richard Wood" };

	KLUB SHW = { "Sheffield Wednesday Football Club", "Sheffield", "The Owls (Sowy)", 1867, "Hillsborough Stadium", 34854, "Neil Thompson", "Barry Bannan" };

	KLUB STO = { "Stoke City Football Club", "Stoke-on-Trent", "The Potters (Garncarze)", 1863, "bet365 Stadium", 30089, "Michael O'Niell", "Ryan Shawcross" };

	KLUB SWA = { "Swansea City Association Football Club", "Swansea", "The Swans (£abêdzie)", 1912, "Liberty Stadium", 21088, "Steve Cooper", "Matt Grimes" };

	KLUB WTF = { "Watford Football Club", "Watford", "The Hornets (Szerszenie)", 1881, "Vicarage Road", 22200, "Xisco Munoz", "Troy Deeney" };

	KLUB WYC = { "Wycombe Wanderers Football Club", "High Wycombe", "The Chairboys", 1887, "Adams Park", 9448, "Gareth Ainsworth", "Matt Bloomfield" };

	// Eredivisie
	KLUB ADO = { "Alles Door Oefening Den Haag", "Haga", "De Ooievaars (Bociany)", 1905, "Cars Jeans Stadion", 15000, "Ruud Brood", "Daryl Janmaat" };

	KLUB AJX = { "Amsterdamsche Football Club Ajax", "Amsterdam", "De Godenzonen (Synowie Bogów)", 1900, "Fohan Cruyff Arena", 55500, "Erik ten Hag", "Dusan Tadiæ" };

	KLUB AZ = { "Alkmaar Zaanstreek", "Alkmaar", "Kaaskoppen (Sero-g³owi)", 1967, "AFAS Stadion", 17023, "Pascal Jansen", "Teun Koopmeiners" };

	KLUB EMM = { "Football Club Emmen", "Emmen", "Rood-Witten", 1925, "De Oude Meerdijk", 8600, "Dick Lukkien", "Anco Jansen" };

	KLUB FEY = { "Feyenoord Rotterdam", "Rotterdam", "De club aan de Maas (Klub nad Moz¹)", 1908, "De Kuip", 51177, "Dick Advocaat", "Steven Berghuis" };

	KLUB FOR = { "Fortuna Sittard Combinatie", "Sittard", "Fortunezen", 1968, "Wagner & Partners Stadion", 12500, "Sjors Ultee", "Wessel Dammers" };

	KLUB GRO = { "Football Club Groningen", "Groningen", "Trots van het Noorden (Duma Pó³nocy)", 1971, "Euroborg", 22579, "Danny Buijs", "Arjen Robben" };

	KLUB HEE = { "Sportclub Heerenveen", "Heerenveen", "De Superfriezen", 1920, "Abe Lenstra Stadion", 26400, "Johnny Jansen", "Henk Veerman" };

	KLUB HRA = { "Sport Club Heracles Almelo", "Almelo", "Heraclieden", 1903, "Polman Stadion", 12080, "Frank Wormuth", "Robin Propper" };

	KLUB ZWO = { "Prins Hendrik Ende Desespereert Nimmer Combinatie Zwolle", "Zwolle", "Blauwvingers (Niebieskopalczaœci)", 1910, "IJsseldelta Stadion", 14000, "John Stegeman", "Bram van Polen" };

	KLUB PSV = { "Philips Sport Vereniging", "Eindhoven", "Boeren (Rolnicy)", 1913, "Philips Stadion", 35000, "Roger Schmidt", "Denzel Dumfries" };

	KLUB RKC = { "Rooms Katholieke Combinatie Waalwijk", "Waalwijk", "RKC", 1940, "Mandemakers Stadion", 7500, "Fred Grim", "Anas Tahiri" };

	KLUB SPR = { "Sparta Rotterdam", "Rotterdam", "De Kasteelheren (Panowie Zamku)", 1888, "Het Kasteel", 11926, "Henk Fraser", "Adil Auassar" };

	KLUB TWE = { "Football Club Twente", "Enschede", "De Tukkers", 1965, "De Grolsch Veste", 30205, "Ron Jans", "Wout Brama" };

	KLUB UTR = { "Football Club Utrecht", "Utrecht", "Utreg", 1970, "Stadion Galgenwaard", 23750, "Rene Hake", "Willem Janssen" };

	KLUB VIT = { "Strichting Betaald Voetbal Vitesse", "Arnhem", "FC Hollywood aan de Rijn", 1892, "GelreDome", 21248, "Thomas Letsch", "Remko Pasveer" };

	KLUB VVV = { "Venlose Voetbal Verenging Venlo", "Venlo", "The Good Old", 1903, "De Koel", 8000, "Hans de Koning", "Danny Post" };

	KLUB WIL = { "Willem II Tilburg", "Tilburg", "Tricolores (Trójkolorowi)", 1896, "Koning Willem II Stadion", 14700, "Adrie Koster", "Jordens Peters" };

	// Ekstraklasa
	KLUB CRA = { "Miejski Klub Sportowy Cracovia", "Kraków", "Pasy", 1906, "Stadion im. Józefa Pi³sudskiego", 15114, "Micha³ Probierz", "Sergiu Hanca" };

	KLUB GZA = { "Górnik Zabrze", "Zabrze", "Trójkolorowi", 1948, "Stadion im. Ernesta Pohla", 24563, "Marcin Brosz", "Micha³ Koj" };

	KLUB JAG = { "Jagiellonia Bia³ystok", "Bia³ystok", "Jaga", 1920, "Stadion Miejski w Bia³ymstoku", 22409, "Bogdan Zaj¹c", "Taras Romanczuk" };

	KLUB LPO = { "Kolejowy Klub Sportowy Lech Poznañ", "Poznañ", "Kolejorz", 1922, "Stadion Miejski w Poznaniu", 42837, "Dariusz ¯uraw", "Thomas Rogne" };

	KLUB LGD = { "Klub Sportowy Lechia Gdañsk", "Gdañsk", "Bia³o-Zieloni", 1945, "Stadion Energa Gdañsk", 41620, "Piotr Stokowiec", "Flavio Paixao" };

	KLUB LEG = { "Legia Warszawa", "Warszawa", "Legioniœci", 1916, "Stadion Wojska Polskiego", 31103, "Czes³aw Michniewicz", "Artur Jêdrzejczyk" };

	KLUB PIA = { "Gliwicki Klub Sportowy Piast", "Gliwice", "Piastunki", 1945, "Stadion Miejski im. Piotra Wieczorka", 9913, "Waldemar Fornalik", "Gerard Badia" };

	KLUB POD = { "Towarzystwo Sportowe Podbeskidzie Bielsko-Bia³a", "Bielsko-Bia³a", "Górale", 1907, "Stadion Miejski w Bielsku-Bia³ej", 15076, "Robert Kasperczyk", "£ukasz Sierpina" };

	KLUB POG = { "Morski Klub Sportowy Pogoñ Szczecin", "Szczecin", "Portowcy", 1948, "Stadion Miejski im. Floriana Krygiera (w trakcie przebudowy)", 12000, "Kosta Runjaiæ", "Adam Fr¹czczak" };

	KLUB RAK = { "Robotniczy Klub Sportowy Raków Czêstochowa", "Czêstochowa", "Czerwono-Niebiescy", 1921, "Miejski Stadion Pi³karski Raków", 4200, "Marek Papszun", "Tomas Petrasek" };

	KLUB SMI = { "PGE Fabryczny Klub Sportowy Stal Mielec", "Mielec", "Bia³o-Niebiescy", 1939, "Stadion Miejskiego Oœrodka Sportu i Rekreacji w Mielcu", 6864, "Leszek Ojrzyñski", "Krystian Getinger" };

	KLUB SLA = { "Wroc³awski Klub Sportowy Œl¹sk Wroc³aw", "Wroc³aw", "Wojskowi", 1946, "Stadion Miejski we Wroc³awiu", 45105, "Vitezslav Levicka", "Krzysztof M¹czyñski" };

	KLUB WRT = { "Warta Poznañ", "Poznañ", "Zieloni", 1912, "Stadion Dyskobolii w Grodzisku Wielkopolskim", 5383, "Piotr Tworek", "Bartosz Kieliba" };

	KLUB WKR = { "Towarzystwo Sportowe Wis³a Kraków", "Kraków", "Bia³a Gwiazda", 1906, "Stadion Miejski im. Henryka Reymana", 33130, "Peter Hyballa", "Jakub B³aszczykowski" };

	KLUB WPL = { "Zak³adowy Klub Sportowy Wis³a P³ock", "P³ock", "Nafciarze", 1947, "Stadion im. Kazimierza Górskiego", 10978, "Rados³aw Sobolewski", "Alan Uryga" };

	KLUB ZLU = { "KGHM Zag³êbie Lubin", "Lubin", "Miedziowi", 1946, "Stadion Zag³êbia Lubin", 16068, "Martin Sevela", "Lubomir Guldan" };

	// drzewko pêtli
	while(true)
	{
		

		if (_getch() == 13)                  // Enter
		{
			system("cls");                     // czyszczenie ekranu
			LIGI();

			while(true)
			{
				if (_getch() == 8)              // Backspace <-
				{
					system("cls");
					MENU();
					break;                    // przerwanie pêtli i powrót do pocz¹tku (reset pêtli)
				}

				if(_getch() == 49)
				{
					system("cls");
					ENG1();                     // wyswietlanie ligi

					while (true)
					{

						if (_getch() == 65 || _getch() == 97)          // A/a
						{
							system("cls");
							ARS.info();           // wyswietlanie klubu
						}

						else if (_getch() == 66 || _getch() == 98)      // B/b
						{
							system("cls");
							AST.info();
						}

						else if (_getch() == 67 || _getch() == 99)      // C/c
						{
							system("cls");
							BHA.info();
						}

						else if (_getch() == 68 || _getch() == 100)      // D/d
						{
							system("cls");
							BUR.info();
						}

						else if (_getch() == 69 || _getch() == 101)   // E/e
						{
							system("cls");
							CHE.info();
						}

						else if (_getch() == 70 || _getch() == 102)        // F/f
						{
							system("cls");
							CRY.info();
						}

						else if (_getch() == 71 || _getch() == 103)       // G/g
						{
							system("cls");
							EVE.info();
						}

						else if(_getch() == 72 || _getch() == 104)       // H/h
						{
							system("cls");
							FUL.info();
						}

						else if(_getch() == 73 || _getch() == 105)      // I/i
						{
							system("cls");
							LEE.info();
						}

						else if(_getch() == 74 || _getch() == 106)        // J/j
						{
							system("cls");
							LEI.info();
						}

						else if(_getch() == 75 || _getch() == 107)       // K/k
						{
							system("cls");
							LFC.info();
						}

						else if(_getch() == 76 || _getch() == 108)         // L/l
						{
							system("cls");
							MNC.info();
						}

						else if(_getch() == 77 || _getch() == 109)          // M/m
						{
							system("cls");
							MNU.info();
						}

						else if(_getch() == 78 || _getch() == 110)       // N/n
						{
							system("cls");
							NEW.info();
						}

						else if(_getch() == 79 || _getch() == 111)        // O/o
						{
							system("cls");
							SHU.info();
						}

						else if(_getch() == 80 || _getch() == 112)      // P/p
						{
							system("cls");
							SOT.info();
						}

						else if(_getch() == 82 || _getch() == 114)        // R/r
						{
							system("cls");
							TOT.info();
						}

						else if(_getch() == 83 || _getch() == 115)        // S/s
						{
							system("cls");
							WBA.info();
						}
						else if(_getch() == 84 || _getch() == 116)        // T/t
						{
							system("cls");
							WHU.info();
						}

						else if(_getch() == 85 || _getch() == 117)        // U/u
						{
							system("cls");
							WOL.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}

				}
				else if(_getch() == 50)
				{
					system("cls");
					ESP1();

					while(true)
					{
						if (_getch() == 65 || _getch() == 97)
						{
							system("cls");
							ATH.info();
						}

						else if (_getch() == 66 || _getch() == 98)
						{
							system("cls");
							ATM.info();
						}

						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							OSA.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							CAD.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							DAL.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							ELC.info();
						}

						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							BAR.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							GET.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							GRA.info();
						}

						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							LVA.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							CEL.info();
						}

						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							BET.info();
						}

						else if(_getch() == 77 || _getch() == 109)
						{
							system("cls");
							RMA.info();
						}

						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							RSO.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							VLD.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							EIB.info();
						}

						else if(_getch() == 82 || _getch() == 114)
						{
							system("cls");
							HUE.info();
						}

						else if(_getch() == 83 || _getch() == 115)
						{
							system("cls");
							SEV.info();
						}

						else if(_getch() == 84 || _getch() == 116)
						{
							system("cls");
							VAL.info();
						}

						else if(_getch() == 85 || _getch() == 117)
						{
							system("cls");
							VIL.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}
				else if(_getch() == 51)
				{
					system("cls");
					GER1();

					while(true)
					{
						if(_getch() == 65 || _getch() == 97)
						{
							system("cls");
							KOL.info();
						}

						else if(_getch() == 66 || _getch() == 98)
						{
							system("cls");
							UNB.info();
						}

						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							MAI.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							BIE.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							LEV.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							BMU.info();
						}

						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							DOR.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							MGL.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							FRA.info();
						}

						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							AUG.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							S04.info();
						}

						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							HER.info();
						}

						else if(_getch() == 77 || _getch() == 109)
						{
							system("cls");
							RBL.info();
						}

						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							FRG.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							HOF.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							STU.info();
						}

						else if(_getch() == 82 || _getch() == 114)
						{
							system("cls");
							WLF.info();
						}

						else if(_getch() == 83 || _getch() == 115)
						{
							system("cls");
							WER.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}
				else if(_getch() == 52)
				{
					system("cls");
					ITA1();

					while(true)
					{
						if(_getch() == 65 || _getch() == 97)
						{
							system("cls");
							ATA.info();
						}

						else if(_getch() == 66 || _getch() == 98)
						{
							system("cls");
							BNV.info();
						}

						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							BOL.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							CAG.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							CRO.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							SPE.info();
						}

						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							FIO.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							ROM.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							GEN.info();
						}

						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							HEL.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							INT.info();
						}

						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							LAZ.info();
						}

						else if(_getch() == 77 || _getch() == 109)
						{
							system("cls");
							MIL.info();
						}
	
						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							NAP.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							PAR.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							JUV.info();
						}

						else if(_getch() == 82 || _getch() == 114)
						{
							system("cls");
							SAM.info();
						}

						else if(_getch() == 83 || _getch() == 115)
						{
							system("cls");
							SAS.info();
						}

						else if(_getch() == 84 || _getch() == 116)
						{
							system("cls");
							TOR.info();
						}

						else if(_getch() == 85 || _getch() == 117)
						{
							system("cls");
							UDI.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}
				else if(_getch() == 53)
				{
					system("cls");
					FRA1();

					while(true)
					{
						if(_getch() == 65 || _getch() == 97)
						{
							system("cls");
							ANG.info();
						}
	
						else if(_getch() == 66 || _getch() == 98)
						{
							system("cls");
							ASM.info();
						}

						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							STE.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							DIJ.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							LOR.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							MET.info();
						}

						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							NNT.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							BOR.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							LIL.info();
						}

						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							MHS.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							NIM.info();
						}
	
						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							NIC.info();
						}

						else if(_getch() == 77 || _getch() == 109)
						{
							system("cls");
							OMA.info();
						}

						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							LYO.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							PSG.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							RCL.info();
						}

						else if(_getch() == 82 || _getch() == 114)
						{
							system("cls");
							RCS.info();
						}

						else if(_getch() == 83 || _getch() == 115)
						{
							system("cls");
							BRS.info();
						}

						else if(_getch() == 84 || _getch() == 116)
						{
							system("cls");
							REI.info();
						}

						else if(_getch() == 85 || _getch() == 117)
						{
							system("cls");
							REN.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}
				else if(_getch() == 54)
				{
					system("cls");
					POR1();

					while(true)
					{
						if(_getch() == 65 || _getch() == 97)
						{
							system("cls");
							BEL.info();
						}

						else if(_getch() == 66 || _getch() == 98)
						{
							system("cls");
							BOA.info();
						}

						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							BRA.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							FAM.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							FRN.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							POR.info();
						}

						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							GVI.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							MAR.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							MOR.info();
						}

						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							NAC.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							PAC.info();
						}

						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							PRM.info();
						}

						else if(_getch() == 77 || _getch() == 109)
						{
							system("cls");
							RAV.info();
						}

						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							SCL.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							BEN.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							SCP.info();
						}

						else if(_getch() == 82 || _getch() == 114)
						{
							system("cls");
							TON.info();
						}

						else if(_getch() == 83 || _getch() == 115)
						{
							system("cls");
							VGU.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}
				else if(_getch() == 55)
				{
					system("cls");
					TUR1();

					while(true)
					{
						if(_getch() == 65 || _getch() == 97)
						{
							system("cls");
							ALA.info();
						}
	
						else if(_getch() == 66 || _getch() == 98)
						{
							system("cls");
							ANT.info();
						}

						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							BBE.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							BES.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							CAY.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							DEN.info();
						}

						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							KAR.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							FEN.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							GAL.info();
						}
	
						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							GAZ.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							GNC.info();
						}

						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							GOZ.info();
						}

						else if(_getch() == 77 || _getch() == 109)
						{
							system("cls");
							HAT.info();
						}

						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							BAS.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							KAS.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							KAY.info();
						}

						else if(_getch() == 82 || _getch() == 114)
						{
							system("cls");
							KON.info();
						}

						else if(_getch() == 83 || _getch() == 115)
						{
							system("cls");
							MKE.info();
						}

						else if(_getch() == 84 || _getch() == 116)
						{
							system("cls");
							SIV.info();
						}

						else if(_getch() == 85 || _getch() == 117)
						{
							system("cls");
							TRA.info();
						}

						else if(_getch() == 87 || _getch() == 119)
						{
							system("cls");
							YMS.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}
				else if(_getch() == 56)
				{
					system("cls");
					ENG2();

					while(true)
					{
						if(_getch() == 65 || _getch() == 97)
						{
							system("cls");
							BRS.info();
						}

						else if(_getch() == 66 || _getch() == 98)
						{
							system("cls");
							BIR.info();
						}

						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							BLA.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							BOU.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							BRN.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							BRI.info();
						}

						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							CAR.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							COV.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							DER.info();
						}

						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							HUD.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							LUT.info();
						}

						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							MID.info();
						}

						else if (_getch() == 77 || _getch() == 109)
						{
							system("cls");
							MLL.info();
						}

						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							NOR.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							NOT.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							PNE.info();
						}

						else if(_getch() == 82 || _getch() == 114)
						{
							system("cls");
							QPR.info();
						}

						else if(_getch() == 83 || _getch() == 115)
						{
							system("cls");
							REA.info();
						}

						else if(_getch() == 84 || _getch() == 116)
						{
							system("cls");
							ROT.info();
						}

						else if(_getch() == 85 || _getch() == 117)
						{
							system("cls");
							SHW.info();
						}

						else if(_getch() == 87 || _getch() == 119)      // W/w
						{
							system("cls");
							STO.info();
						}

						else if(_getch() == 89 || _getch() == 121)        // Y/y
						{
							system("cls");
							SWA.info();
						}

						else if(_getch() == 90 || _getch() == 122)         // Z/z
						{
							system("cls");
							WTF.info();
						}

						else if(_getch() == 88 || _getch() == 120)         // X/x
						{
							system("cls");
							WYC.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}
				else if(_getch() == 57)
				{
					system("cls");
					NED1();

					while(true)
					{
						if(_getch() == 65 || _getch() == 97)
						{
							system("cls");
							ADO.info();
						}

						else if(_getch() == 66 || _getch() == 98)
						{
							system("cls");
							AJX.info();
						}
	
						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							AZ.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							EMM.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							GRO.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							TWE.info();
						}

						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							UTR.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							FEY.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							FOR.info();
						}

						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							HRA.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							ZWO.info();
						}

						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							PSV.info();
						}

						else if(_getch() == 77 || _getch() == 109)
						{
							system("cls");
							RKC.info();
						}

						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							HEE.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							SPR.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							VIT.info();
						}

						else if(_getch() == 82 || _getch() == 114)
						{
							system("cls");
							VVV.info();
						}

						else if(_getch() == 83 || _getch() == 115)
						{
							system("cls");
							WIL.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}
				else if(_getch() == 48)
				{
					system("cls");
					POL1();

					while(true)
					{
						if(_getch() == 65 || _getch() == 97)
						{
							system("cls");
							CRA.info();
						}

						else if(_getch() == 66 || _getch() == 98)
						{
							system("cls");
							GZA.info();
						}

						else if(_getch() == 67 || _getch() == 99)
						{
							system("cls");
							JAG.info();
						}

						else if(_getch() == 68 || _getch() == 100)
						{
							system("cls");
							LPO.info();
						}

						else if(_getch() == 69 || _getch() == 101)
						{
							system("cls");
							LGD.info();
						}

						else if(_getch() == 70 || _getch() == 102)
						{
							system("cls");
							LEG.info();
						}
	
						else if(_getch() == 71 || _getch() == 103)
						{
							system("cls");
							PIA.info();
						}

						else if(_getch() == 72 || _getch() == 104)
						{
							system("cls");
							POD.info();
						}

						else if(_getch() == 73 || _getch() == 105)
						{
							system("cls");
							POG.info();
						}

						else if(_getch() == 74 || _getch() == 106)
						{
							system("cls");
							RAK.info();
						}

						else if(_getch() == 75 || _getch() == 107)
						{
							system("cls");
							SLA.info();
						}

						else if(_getch() == 76 || _getch() == 108)
						{
							system("cls");
							SMI.info();
						}

						else if(_getch() == 77 || _getch() == 109)
						{
							system("cls");
							WRT.info();
						}

						else if(_getch() == 78 || _getch() == 110)
						{
							system("cls");
							WKR.info();
						}

						else if(_getch() == 79 || _getch() == 111)
						{
							system("cls");
							WPL.info();
						}

						else if(_getch() == 80 || _getch() == 112)
						{
							system("cls");
							ZLU.info();
						}

						if (_getch() == 8)
						{
							break;
						}
					}
				}

				
			}


		}

	}

	

	system("pause");
}