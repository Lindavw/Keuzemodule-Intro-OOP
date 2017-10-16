#pragma once
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();
	void toon;
	void voegToe(string titel);

private:
	Boek* boek = new Boek();
};