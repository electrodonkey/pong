#pragma once
#include <string>
#include <stdint.h>
#include <iostream>

using namespace std;

class Player
{
public:
	string playerName;

	void printName()
	{
		cout << "Player name is: " << playerName;
	}
};

