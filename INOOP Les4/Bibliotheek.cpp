#include "Bibliotheek.h"
#include "Boek.h"
#include <iostream>


Bibliotheek::Bibliotheek()
{
}

void Bibliotheek::toon()
{
	cout << "U heeft het boek met titel: " << boek->_titel << endl;
}

void Bibliotheek::voegToe(string titel)
{
	boek = new Boek(titel);
}