#include "Pizza.h"

Pizza::Pizza()
{
}

Pizza::Pizza(string nazwa, string skladniki, int cena)
{
	this->nazwa = nazwa;
	this->cena = cena;
	this->skladniki = skladniki;
}

void Pizza::DodajDane(string naz, string sklad, double cen)
{
	nazwa = naz;
	skladniki = sklad;
	cena = cen;
}

void Pizza::PokazPizze()
{
	cout << nazwa << endl;
	cout << skladniki << endl;
	cout << "Cena: " << cena << "zl" << endl;

}

