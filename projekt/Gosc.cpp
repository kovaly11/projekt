#include "Gosc.h"

void Gosc::DodajUzytkownika(string imie, string nazwisko, string haslo="Nie ma hasla")
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}

void Gosc::WypiszDane()
{
	cout << imie << " " << nazwisko << endl;
}

void Gosc::DodajPizze(string nazwa, string skladniki, double cena)
{	
	cout << "Gosc nie moze zmienic menu" << endl;
}

