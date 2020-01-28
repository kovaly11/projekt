#include "Kerownik.h"


void Kerownik::DodajUzytkownika(string imie, string nazwisko, string haslo)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->haslo = haslo;

}

void Kerownik::WypiszDane()
{
	cout << imie << " " << nazwisko << endl;
	cout << "Haslo: " << haslo << endl;
}

void Kerownik::DodajPizze(string nazwa, string skladniki, double cena)
{
	ofstream file;
	file.open("1.txt", std::ios::app);
	file <<endl<< nazwa << endl;
	file << "Skladniki : " << skladniki << endl;
	file << cena;
	file.close();
}
