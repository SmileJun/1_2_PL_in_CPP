#pragma once
class Board
{
public:
	Board();
	~Board();
private:
	int width, height;
	int** map;

public:
	void DrawBoard();
};

