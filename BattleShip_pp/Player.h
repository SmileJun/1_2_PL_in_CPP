#pragma once
#include <string>
#include "Aircraft.h"
#include "Battleship.h"
#include "Crusier.h"
#include "Destroyer.h"

class Player
{
public:
	Player();
	~Player();

	void SetupShips();
	void PrintShips();
	std::string GetName();
	int GetScore();

protected:
	Aircraft m_Aircraft;
	Battleship m_Battleship;
	Crusier m_Crusier;
	Destroyer m_Destroyer[2];

private:
	std::string name;
	int score;
};