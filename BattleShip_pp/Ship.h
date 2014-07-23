#pragma once
struct Position
{
	int x, y;
};

enum HitResult
{
	MISS,
	HIT,
	DESTROY
};

enum Direction
{
	RIGHT,
	LEFT,
	UP,
	DOWN
};

enum ShipType
{
	SHIPNONE,
	AIRCRAFT,
	BATTLESHIP,
	CRUISER,
	DESTROYER
};

class Ship
{
public:
	Ship();
	~Ship();

public:
	HitResult HitCheck(Position pos);
	int GetHP();
	void AddPosition(Position head, Direction dir);
	void Print();

protected:
	Position m_Pos[5];
	int size;
	int m_Hp;
	/*
	Direction m_Direction;*/
	ShipType m_Type;
};

class Aircraft: public Ship
{
public:
	Aircraft();
	~Aircraft();
	void Print();

private:

};

