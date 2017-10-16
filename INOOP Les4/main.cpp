#include <iostream>
#include "Boek.h"
#include "Boekenkast.h"

void verwisselBoek(Boekenkast* nieuwBoek) {
	cout << "nieuw boek gekregen" << endl;
	nieuwBoek->toon();
	nieuwBoek->voegToe("Oorsprong");
	nieuwBoek->toon();
	nieuwBoek->voegToe("De mist");

}

int main() {

	Boekenkast* nieuwBoek = new Boekenkast();
	nieuwBoek->toon();
	nieuwBoek->voegToe("IT");
	nieuwBoek->toon();
	nieuwBoek->voegToe("De griezelbus");
	nieuwBoek->toon();

	verwisselBoek(nieuwBoek);
	nieuwBoek->toon();

	char c;
	cin >> c;
	return 0;
}