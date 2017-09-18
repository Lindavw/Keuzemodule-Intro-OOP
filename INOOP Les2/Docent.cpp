#include "Docent.h"


Docent::Docent()
{
}

Docent::Docent(string naam, int leeftijd, string vak)
{
	pNaam = naam;
	pLeeftijd = leeftijd;
	docentVak = vak;
}

string Docent::getVak() {
	return docentVak;
}



