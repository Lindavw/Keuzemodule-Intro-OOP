#include "Persoon.h"
#include <iostream>


Persoon::Persoon()
{
}

Persoon::Persoon(int leeftijd, string naam)
{
	pLeeftijd = leeftijd;
	pNaam = naam;
}

string Persoon::getName() {
	return pNaam;
}

int Persoon::getAge() {
	return pLeeftijd;
}