#pragma once
#include "Uzytkownik.h"
#include <fstream>
class Kerownik :
	public Uzytkownik
{
	string haslo; // Haslo Kierownika
public:
	void DodajUzytkownika(string, string, string);
	void WypiszDane();
	void DodajPizze(string, string, double);
};

