#include<iostream>
#include"RecursiveS.h"


RecursiveS::RecursiveS(int theNumber) {
	nRecurs = theNumber;
};

int RecursiveS::sumOfFactor(int theNumber) {

	int nRecurs;
	if (theNumber == 1)
		nRecurs = 1;
	else
		nRecurs = theNumber + sumOfFactor(theNumber - 1);
	return nRecurs;
};

