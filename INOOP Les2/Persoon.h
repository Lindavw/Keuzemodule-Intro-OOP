#pragma once
#include <string>

using namespace std;

class Persoon
{
public:
	Persoon();
	Persoon(int leeftijd, string naam);

	int pLeeftijd;
	string pNaam;

	string getName();
	int getAge();
};

