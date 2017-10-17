#include <iostream>
#include "Boek.h"
#include "Bibliotheek.h"
#include <vector>

int main() {

	// vector<Boek*> boekenlijst;
	// boekenlijst = {"de griezelbus" , "IT"}
	Bibliotheek bieb;
	bieb.toon();

	bieb.voegToe("de griezelbus");
	cout << "-- filiaalnaam: bieb" << endl;
	bieb.toon();

	Bibliotheek biblio;
	biblio = bieb;
	cout << "-- filiaalnaam: biblio" << endl;
	biblio.toon();


	char c;
	cin >> c;
	return 0;
}