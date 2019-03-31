#include<iostream>
#include<string>
#include"TowersOfH.h"

using namespace std;

TowersOFHanoi::TowersOFHanoi() {
};

void TowersOFHanoi::hanoiTowers(int theCount, char theSource, char theDestination, char theSpare) {

	if (theCount == 1)
	{
		cout << "Move top disk from pole" << theSource
			<< " to pole " << theDestination << endl;
	}
	else
	{
		hanoiTowers(theCount -1, theSource, theSpare, theDestination);
		hanoiTowers(1, theSource, theDestination, theSpare);
		hanoiTowers(theCount - 1, theSpare, theDestination, theSource);
	}

};