#include <iostream>
using namespace std;

//lab1 g2 podsawy program. pzdr

int main()
{
	cout << "zad1\n";
	string imie, nazwisko;
	cout << "Podaj swoje imie: ";
	cin >> imie;
	cout << "\nPodaj swoje nazwisko: ";
	cin >> nazwisko;
	
	cout << "\nTwoje inicjaly to: " << imie[0] << nazwisko[0];

	cout << "\n\nzad2";
	cout << "\nGwiazda 5-ramienna\n";
	cout << "    *  \n";
	cout << "   * * \n";
	cout << "* *   * *\n";
	cout << "  * * *\n";
	cout << " *     *\n\n";

	cout << "zad3\n";

	cout << "\t\tLista obecnosci:\n";
	cout << "nr.\t|\timie\t|\tnazwisko\n";
	cout << "------------------------------------------------------\n";
	cout << "1.\t|\tHubert\t|\tKaminski\n";
	cout << "2.\t|\tAnna\t|\tNowak\n";
	cout << "3.\t|\tBozydar\t|\tBrzeczyszczykiewicz\n\n";

	float a, b;
	cout << "Podaj 2 liczby:\n";
	cout << "liczba 1: ";
	cin >> a;
	cout << "\nliczba 2: ";
	cin >> b;
	cout << "\nSuma: " << a + b;
	cout << "\nIloczyn: " << a * b;

	cout << "\n\nzad5\n";
	int f, c;
	cout << "Podaj temperature w stopniach Farenheita: ";
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "\nTemperatura w stopniach Celsjusza: " << c;

	return 0;
}