// Avitia_Alejandra_&Luu_Mai_Assignment1.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//string connectors = "!V";
	//string statements = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
	string userInput;

	cout << "Enter a string: ";
	getline(cin, userInput);

	cout << "\nYou entered: " << userInput << endl;
	bool lastWasAlpha = false;
	bool lastWasNot = false;
	bool lastWasConnector = false;
	bool lastWasPartOfImplies = false;
	bool isValidWff = true;
	for (unsigned int i = 0; i < userInput.length(); i++)
	{
		char c = userInput[i];
		if (c == ' ')
		{
			continue;
		}
		if (c == '!' || c == 'V' || c == '^' || c == 'v' || c == '-' || c == '>')
		{
			if (c != '!' && c != '-' && c != '>')
			{
				if (!lastWasAlpha)
				{
					isValidWff = false;
					break;
				}
				lastWasConnector = true;
			}
			else if (c == '-'||  c == '>')
			{
				if (c == '-')
				{
					if (!lastWasAlpha)
					{
						isValidWff = false;
						break;
					}
					lastWasConnector = true;
					lastWasPartOfImplies = true;
				}
				if (c == '>')
				{
					if (!lastWasPartOfImplies)
					{
						isValidWff = false;
						break;
					}
					lastWasConnector = true;
				}	
			}
			else // this only checks for ! 
			{
				if (lastWasAlpha)
				{
					isValidWff = false;
					break;
				}
				lastWasNot = true;
			}
			lastWasAlpha = false;
		}
		else if (isalpha(c))
		{
			if (!isupper(c))
			{
				isValidWff = false;
				break;
			}
			else if (lastWasAlpha)
			{
				isValidWff = false;
				break;
			}
			lastWasAlpha = true;
			continue;
		}
		else
		{
			isValidWff = false;
		}

	}
	
	cout << (isValidWff ? "That is a Wff" : "NOT Valid WFF") << endl;

	return 0;
}

