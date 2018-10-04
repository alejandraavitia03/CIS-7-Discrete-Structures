// Assignment 6.cpp : This program will calculate the GCD of two numbers 
// using the Euclidean algorithm
// by: Alejandra Avitia

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

//Function Prototype
int getGCD(int a, int b);

int main()
{
	int a = 0;
	int b = 0;
	int results = 0;
	
	//Prompting the user for the first int
	cout << "This program will calculate the GCD of the two numbers you give it.\n";
	cout << "Please enter two positive interger: ";

	cin >> a >> b;
	while (a <= 0 || b <=0) //Validation
	{
		cout << "Invalid entry. Please try again: ";
		cin >> a >> b;
	}
	
	results = getGCD(a, b);

	cout << "\nThe GCD of " << a << " and " << b << " is: " << results << endl;
	

    return 0;
}
//Getting the 
int getGCD(int a, int b) //You don't need to check to see which is bigger because if the smaller one is on top it will say the remainder is the smaller one. 
{
	int r = a % b;
	if (r != 0)
	{
		getGCD(b, r);
	}
	else
	{
		return b;
	}
}
