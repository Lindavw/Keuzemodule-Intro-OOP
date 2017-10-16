#include "Boekenkast.h"
#include "Boek.h"
#include <iostream>

Boekenkast::Boekenkast()
{
}

void Boekenkast::toon() 
{
	cout << "U heeft het boek met titel: " << boek->_titel << endl;
}

void Boekenkast::voegToe(string titel)
{
	boek = new Boek(titel);
}