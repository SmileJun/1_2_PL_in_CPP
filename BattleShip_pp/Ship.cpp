#include "stdafx.h"
#include "Ship.h"
#include "iostream"


Ship::Ship()
{
	m_Hp = 0;
	m_Type = SHIPNONE;
}


Ship::~Ship()
{
}

HitResult Ship::HitCheck(Position pos)
{
	for (int i = 0; i < size; ++i)
	{
		if (pos.x == m_Pos[i].x && pos.y == m_Pos[i].y)
		{
			m_Hp -= 1;

			if (m_Hp == 0)
				return DESTROY;

			return HIT;
		}
	}
	return MISS;
}

void Ship::AddPosition(Position head, Direction dir)
{
	switch (dir)
	{
	case RIGHT:
		for (int i = 0; i < size; ++i)
		{
			Position p = { head.x + i, head.y };
			m_Pos[i] = p;
		}
		break;
	case LEFT:
		for (int i = 0; i < size; ++i)
		{
			Position p = { head.x - i, head.y };
			m_Pos[i] = p;
		}
		break;
	case UP:
		for (int i = 0; i < size; ++i)
		{
			Position p = { head.x, head.y + i };
			m_Pos[i] = p;
		}
		break;
	case DOWN:
		for (int i = 0; i < size; ++i)
		{
			Position p = { head.x, head.y - i };
			m_Pos[i] = p;
		}
		break;
	default:
		break;
	}
}

int Ship::GetHP()
{
	return m_Hp;
}

Aircraft::Aircraft()
{
	size = 5;
	m_Hp = 5;
}

Aircraft::~Aircraft()
{

}

void Aircraft::Print()
{
	std::cout << "Aircraft's HP : " << GetHP() << "\n";
}
