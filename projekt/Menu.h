#pragma once
#include "Uzytkownik.h"
#include "Pizza.h"
#include "Kerownik.h"
#include "Gosc.h"

string haslo, haslowpisane, imie, nazwisko;
Pizza pizzy[100];
int iloscpizzy = 0;
Kerownik* k = new Kerownik();
Gosc* g = new Gosc();
Uzytkownik* uzytkownik;
int numer;

void MenuWyboru();
//Menu dla Uzytkownika
void MenuUzytkownikaika()
{
	int num;
	double cena;
	string nazwa, skladniki;
	cout << "1.DodajPizze" << endl;
	cout << "2.PokazMenu" << endl;
	cout << "3.Wypisz dane Uzytkownika" << endl;
	cout << "4.Wyjscie" << endl;
	cout << "Podaj numer: "; cin >> num;
	if (num == 1)
	{
		cout << "Podaj Nazwe, Skladniki i Cenu " << endl;
		cout << "Nazwa: "; cin >> nazwa;
		cout << "Skladniki: ";
		cin.ignore(1);
		getline(cin, skladniki);
		cout << "Cena: "; cin >> cena;
		uzytkownik->DodajPizze(nazwa, skladniki, cena);
		if (numer == 1)
		{
			pizzy[iloscpizzy].DodajDane(nazwa, skladniki, cena);
			iloscpizzy++;
		}
		system("pause");
		system("cls");
		MenuUzytkownikaika();
		
	}
	else if (num == 2)
	{
		system("cls");
		for (int i = 0; i < iloscpizzy; i++) {
			pizzy[i].PokazPizze();
			cout << endl;
		}
		system("pause");
		system("cls");
		MenuUzytkownikaika();
	}
	else if (num == 3)
	{
		uzytkownik->WypiszDane();
		system("pause");
		system("cls");
		MenuUzytkownikaika();
	}
	else if (num == 4)
	{
		exit(0);
	}
	else
	{
		cout << "Popraw dane" << endl;
		system("pause");
		system("cls");
		MenuUzytkownikaika();
		
	}
}

//Metoda dla sprawdzenia hasla jkie jest w pliku
void SprawdzenieHasla() {
	ifstream has("haslo.txt");
	has >> haslo;
	cout<<"Wpisz Haslo:" << endl;
	cin >> haslowpisane;
	if (haslo == haslowpisane)
	{
		uzytkownik = k;
		uzytkownik->DodajUzytkownika(imie, nazwisko, haslo);
		MenuUzytkownikaika();
		
	}
	else
	{
		cout << "Niepoprawne haslo" << endl;
		system("pause");
		system("cls");
		MenuWyboru();

	}
}

//Menu dla wyboru statusa uzytkownika
void MenuWyboru() 
{
	cout << "Wpisz numer swojego statusu:" << endl;
	cout << "1.Kerownik\n2.Gosc\n3.Wyjscie" << endl;
	cout << "Czekam numer" << endl;
	cin >> numer;
	if (numer == 1)
		SprawdzenieHasla();
	else if (numer == 2)
	{
		uzytkownik = g;
		uzytkownik->DodajUzytkownika(imie, nazwisko, haslo);
		MenuUzytkownikaika();
		
	}
	else if (numer == 3)
		exit(0);
	else
	{
		cout << "Zly numer, sprobuj ponownie" << endl;
		system("pause");
		system("cls");
		MenuWyboru();
	}

}


void Menu()
{
	/* Czytamy z pliku wszyskie pizzy*/
	ifstream f;
	f.open("1.txt");
	while (!f.eof())
	{
		string naz, sklad, tmp;
		double cen;
		getline(f, naz);
		getline(f, sklad);
		f >> cen;
		getline(f, tmp);
		pizzy[iloscpizzy].DodajDane(naz, sklad, cen);
		iloscpizzy++;
	}
	f.close();
	cout << "---Witamy w pizzerii---" << endl;
	cout << "Wpisz Imie i Nazwisko:" << endl;
	cout << "Imie: "; cin >> imie;
	cout << "Nazwisko: "; cin >> nazwisko;
	MenuWyboru();
}