#include<iostream>
#include<string>
#include"RecursiveF.h"
#include"RecursiveS.h"
#include"TowersOfH.h"
using namespace std;

int main() {

	RecursiveF c(0);
	RecursiveS a(0);
	TowersOFHanoi b;

	int userInput;
	
	cout << "Type a number for Recursive Factorial:" << endl;
	cin >> userInput;
	int factor = c.factorialF(userInput);
	cout << "The result of Recursive Factorial of number: " << userInput << " is: " << factor << endl;

	cout << endl;

	cout << "Type a number for recursive summation :" << endl;
	cin >> userInput;
	factor = a.sumOfFactor(userInput);
	cout << "The result of Recursive summation of number: " << userInput << " is: " << factor << endl;

	cout << "How many intems are in stack X? :" << endl;
	cin >> userInput;
	b.hanoiTowers(userInput, 'X','Y','Z');

	system("PAUSE");
	return 0;
}