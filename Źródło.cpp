#include <iostream>
#include <Windows.h>

using namespace std;

struct pracownik {
	string imie;
	string nazwisko;
	int wiek;
	int placa;
	string stanowisko;
	string umowa;
};

int main()
{

	pracownik dane[100];

	int wybor;
	int firma;
	int i, j;
	int blokada = 0;


	cout << "witam w programie do zarzadzania pracownikami" << endl;
	Sleep(1500);
	cout << "\n 1. Pokaz wszystkich pracownikow \n 2. Dodaj pracownika \n 3. Edytuj dane pracownika \n 4. Usun pracownika \n 5. Wyjdz z programu" << endl << endl;

	do {
		cout << "========================================================================================================================" << endl;
		cout << "twoj wybor: ";
		cin >> wybor;
		cout << endl;

		if (wybor > 0) {

			if (wybor == 2) {
				blokada = 1;
			}

			switch (wybor) {
			case 1: //================================================= wyswietlanie pracownikow ===================================================================================
				if (blokada == 0) {
					cout << "Nie masz pracownikow" << endl;
				}
				else {
					cout << "Twoji pracownicy:" << endl;
					for (i = 0; i < j; i++) {
						int a = i + 1;
						cout << a << ". " << "id: " << i << " " << dane[i].imie << " " << dane[i].nazwisko << " wiek: " << dane[i].wiek << ", zarobki: " << dane[i].placa << "zl, stanowisko: " << dane[i].stanowisko << ", rodzja umowy: " << dane[i].umowa << endl;
					}
				}
				break;
			case 2: //================================================= dodawanie pracownikow ===================================================================================
				cout << "wpisz ile chcesz dodac pracownikow: ";
				cin >> j;
				cout << endl;
				if (j > 0) {
					for (int i = 0; i < j; i++) {
						cout << "Wpisz imie pracownika: ";
						cin >> dane[i].imie;
						cout << endl;

						cout << "Wpisz nazwisko pracownika: ";
						cin >> dane[i].nazwisko;
						cout << endl;

						cout << "Wpisz wiek pracownika: ";
						cin >> dane[i].wiek;
						cout << endl;

						cout << "Wpisz zarobki pracownika: ";
						cin >> dane[i].placa;
						cout << endl;

						cout << "Wpisz stanowisko pracownika: ";
						cin >> dane[i].stanowisko;
						cout << endl;

						cout << "Wpisz rodzaj umowy pracownika: ";
						cin >> dane[i].umowa;
						cout << endl;
					}
				}
				else {
					cout << "blad programu, wylaczam" << endl << endl;
					cout << "Never gonna give you up" << endl;
					cout << "Never gonna let you down" << endl;
					return 0;
				}

				break;
			case 3: //================================================= edytowanie pracownikow ===================================================================================
				if (blokada == 0) {
					cout << "Nie masz pracownikow" << endl;
				}
				else {
					cout << "Wybierz po id jakiego pracownika chcesz edytowac: ";
					cin >> i;
					cout << endl;

					cout << "Wpisz nowe imie pracownika: ";
					cin >> dane[i].imie;
					cout << endl;

					cout << "Wpisz nowe nazwisko pracownika: ";
					cin >> dane[i].nazwisko;
					cout << endl;

					cout << "Wpisz nowy wiek pracownika: ";
					cin >> dane[i].wiek;
					cout << endl;

					cout << "Wpisz nowe zarobki pracownika: ";
					cin >> dane[i].placa;
					cout << endl;

					cout << "Wpisz nowe stanowisko pracownika: ";
					cin >> dane[i].stanowisko;
					cout << endl;

					cout << "Wpisz nowy rodzaj umowy pracownika: ";
					cin >> dane[i].umowa;
					cout << endl;
				}
				break;
			case 4:  //================================================= usuwanie pracownikow ===================================================================================
				if (blokada == 0) {
					cout << "Nie masz pracownikow" << endl;
				}
				else {
					cout << "Wybierz po id jakiego pracownika chcesz usunac: ";
					cin >> i;
					cout << endl;
					dane[i].imie = "usuniety";
					dane[i].nazwisko = "usuniety";
					dane[i].wiek = 0;
					dane[i].placa = 0;
					dane[i].stanowisko = "usuniety";
					dane[i].umowa = "usuniety";
				}
				break;
			case 5:  // ==================================================== zamykanie programu =====================================================================================
				cout << "Zamykam program ";
				Sleep(1000);
				cout << ". ";
				Sleep(1000);
				cout << ". ";
				Sleep(1000);
				cout << ". ";
				Sleep(1000);
				return 0;
				break;

			default:
				cout << "========================================================================================================================" << endl;
				cout << "                                       zly wybor wpisz jeszcze raz\n";
				cout << "========================================================================================================================" << endl;
			}
		}
		else {
			cout << "blad programu, wylaczam";
			Sleep(1000);
			cout << ". ";
			Sleep(1000);
			cout << ". ";
			Sleep(1000);
			cout << ". ";
			Sleep(1000);
			return 0;
		}
	} while (wybor != 1 or wybor != 2 or wybor != 3 or wybor != 4 or wybor != 5);


	return 0;
}