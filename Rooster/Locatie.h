#pragma once
#include<string>

using std::string;

class Locatie
{
private:
	int lokaalNummer;			//203
	string gebouwNaam;			//IBB
	string locatie;				// gebouwNaam + lokaalNummer = locatie. IBB203
public:
	Locatie();
	~Locatie();
};

