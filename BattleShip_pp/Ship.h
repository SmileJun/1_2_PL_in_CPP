#pragma once
#include <string>

enum ShipType
{
	SHIP_NONE,
	AIRCRAFT,
	BATTLESHIP,
	CRUSIER,
	DESTROYER,
};

enum HitResult
{
	Hit,
	MISS,
	DESTROY,
};

enum Direction
{
	DIRECTION_NONE,
	East,
	West,
	South,
	North,
};

struct Position
{
	char m_X;
	char m_Y;
};

class Ship
{
public:
	Ship();
	~Ship();

	void AddPosition(Position pos);
	void AddPosition(char x, char y);
	HitResult HitCheck(Position hitPos);
	void Print();
	bool IsValidPosition(Position head, Direction direction);
	int GetCurHP();
	int GetMaxHP();
	Position GetPos(int index);
	std::string GetName();

protected:
	std::string m_Name;
	ShipType m_Type;
	Position m_Pos[5];
	int m_MaxHP;
	int m_CurHP;
};