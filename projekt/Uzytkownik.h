#pragma once
#include<string>
#include<iostream>

using namespace std;
/*Abstraktna klasa*/
class Uzytkownik
{
protected: 
	string imie, nazwisko; 
public:
	virtual void DodajUzytkownika(string, string, string) = 0;//Dodajemy uzytkownika
	virtual void WypiszDane() = 0;// Wysweylajem na konsoli dane uzytkownika
	virtual void DodajPizze(string, string, double) = 0; // Dodajemy Pizzu do pliku
};

