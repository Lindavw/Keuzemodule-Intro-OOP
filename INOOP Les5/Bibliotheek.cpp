#include "Bibliotheek.h"
#include "Boek.h"
#include <iostream>


Bibliotheek::Bibliotheek()
{
}

Bibliotheek::~Bibliotheek() 
{
	delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek &bibliotheek) 
{
	boek = new Boek();
	boek->_titel = bibliotheek.boek->_titel;
}

//Bibliotheek & Bibliotheek::operator=(const Bibliotheek & bibliotheek) 
//{
//	if (this != &bibliotheek) {
//		if (boek) {
//			delete boek;
//		}
//
//		boek = new Boek(bibliotheek.boek->_titel);
//	}
//
//	return *this;
//}

void Bibliotheek::toon()
{
	cout << "U heeft het boek met titel: " << boek->_titel << endl;
}

void Bibliotheek::voegToe(string titel)
{
	boek = new Boek(titel);
}