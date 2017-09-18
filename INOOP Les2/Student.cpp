#include "Student.h"



Student::Student()
{
}

Student::Student(string naam, int leeftijd, string richting) 
{
	pNaam = naam;
	pLeeftijd = leeftijd;
	studentRichting = richting;
}

string Student::getRichting() 
{
	return studentRichting;
}


