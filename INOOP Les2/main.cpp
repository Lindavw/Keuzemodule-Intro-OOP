#include <iostream>
#include "Persoon.h"
#include "Docent.h"
#include "Student.h"

int main() {
	
	Docent *d1 = new Docent("Jan", 55, "Natuurkunde");
	Student *s1 = new Student("Max", 22, "Game Development");

	cout << "Deze docent heet: " << d1->getName() << ", hij is" << d1->getAge() << "jaar, en hij geeft " << d1->getVak() << endl;
	cout << "Deze student heet: " << s1->getName() << ", hij is" << s1->getAge() << "jaar, en hij studeert " << s1->getRichting() << endl;

	char key;
	cin >> key;

	return 0;
}