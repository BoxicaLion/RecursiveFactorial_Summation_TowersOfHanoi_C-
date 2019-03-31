#include"RecursiveF.h"
#include<iostream>
#include<string>
using namespace std;

RecursiveF::RecursiveF(int thenumber) {

	recNumber = thenumber;
};


int RecursiveF::factorialF(int theNumber) {

	if (theNumber == 0)
		return 1;
	else

	return theNumber * factorialF(theNumber - 1);

};