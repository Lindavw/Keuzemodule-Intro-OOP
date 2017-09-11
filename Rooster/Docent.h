#pragma once
#include <string>

using std::string;

class Docent
{
private:
	string voornaam;		// Edwin 
	string achternaam;		// Ouwekerk, van

	string afkorting;		// EdOuw - Eerste 2 char's van voornaam + eerste 3 char's van achternaam
public:
	Docent();
	~Docent();
};

