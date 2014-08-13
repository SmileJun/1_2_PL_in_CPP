#pragma once
#include <string>
class GameManager
{
public:
	GameManager();
	~GameManager();

public:
	bool ReceiveMap();
	bool MapCheck();
	
private:
	std::string player1Name;
	std::string player2Name;
	int player1Score;
	int player2Score;
	bool player1Map[8][8];
	bool player2Map[8][8];
	int turnoverNumber;
};