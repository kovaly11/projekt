#pragma once
#include<string>
#include<string.h>
#include <iostream>

using namespace std;

class Pizza
{	
private:
	string skladniki, nazwa;
	double cena;
public:
	Pizza();
	Pizza(string, string, int);
	void DodajDane(string, string, double); //metoda dla dodawania danych pizzy
	void PokazPizze(); //metoda dla wyswetlenia pizzy
};

