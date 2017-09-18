#pragma once
#include "Persoon.h"
#include <string>

using namespace std;

class Docent : public Persoon
{
public:
	Docent();
	Docent(string naam, int leeftijd, string vak);

	string docentVak;

	string getVak();
};

