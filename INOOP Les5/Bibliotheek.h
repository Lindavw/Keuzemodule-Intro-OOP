#pragma once
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();
	virtual ~Bibliotheek();
	Bibliotheek(const Bibliotheek &bibliotheek);
//	Bibliotheek& operator = (const Bibliotheek&);
	void toon();
	void voegToe(string titel);

private:
	Boek* boek = new Boek();
};