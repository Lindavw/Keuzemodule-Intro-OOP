#pragma once

class Datum
{
private:
	short dag;				//11
	short maand;			//9
	int jaar;				//2017

	double beginTijd;		//13:50
	double eindTijd;		//15:00
	float lesDuur;			// eindTijd - beginTijd = 15 - 13.5 = 1.5 (uur)
public:
	Datum();
	~Datum();
};

