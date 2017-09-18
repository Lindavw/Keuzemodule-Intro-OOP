#pragma once
#include "Persoon.h"

class Student : public Persoon
{
public:
	Student();
	Student(string naam, int leeftijd, string richting);

	string studentRichting;

	string getRichting();
};

