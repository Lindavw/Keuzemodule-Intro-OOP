#pragma once
#include <iostream>
#include <string>
using namespace std;

class Boek {

public:
	Boek();
	virtual ~Boek();
	Boek(string titel);
	string _titel = "onbekend";
};