#pragma once
#include "Board.h"
#include "Ship.h"
#define SHIPNUM 5

class Player
{
public:
	Player();
	~Player();

public:
	void Submit();
	void Placeship();
	void Attack();
	void GiveUp();

private:
	Board myBoard;
	Board enemyBoard;
	Ship shipList[SHIPNUM];
	int type;

};

