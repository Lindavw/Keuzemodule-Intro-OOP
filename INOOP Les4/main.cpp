#include <iostream>
#include "Boek.h"
#include "Bibliotheek.h"

void verwisselBoek(Bibliotheek* nieuwBoek) {
	cout << "nieuw boek gekregen" << endl;
	nieuwBoek->toon();
	nieuwBoek->voegToe("Oorsprong");
	nieuwBoek->toon();
	nieuwBoek->voegToe("De mist");

}

int main() {

	Bibliotheek* nieuwBoek = new Bibliotheek();
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
