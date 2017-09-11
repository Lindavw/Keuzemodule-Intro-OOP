#pragma once

#include <iostream>
#include <string>
using namespace std;
using std::endl;
using std::cout;
using std::string;

class Rooster
{
private:
	string moduleNaam;

public:
	//	Rooster();								//constructor

	Rooster() {
		moduleNaam = "HeavyOOProgramming";
	}

	void Module() {
		cout << moduleNaam << endl;
	}

	// ~Rooster();								//destructor

};