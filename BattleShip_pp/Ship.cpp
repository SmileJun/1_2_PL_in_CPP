#include "stdafx.h"
#include <iostream>
#include "Ship.h"

Ship::Ship()
{
	m_Name = "";
	m_Type = SHIP_NONE;
	memset(m_Pos, 0, sizeof(Position) * 5);
	m_MaxHP = 0;
	m_CurHP = m_MaxHP;
}


Ship::~Ship()
{
}


void Ship::AddPosition(Position pos)
{
	for (int index = 0; index < m_MaxHP; index++)
	{
		if (m_Pos[index].m_X == 0)
		{
			m_Pos[index] = pos;

			break;
		}
	}
}

void Ship::AddPosition(char x, char y)
{
	for (int index = 0; index < m_MaxHP; index++)
	{
		if (m_Pos[index].m_X == 0)
		{
			m_Pos[index].m_X = x;
			m_Pos[index].m_Y = y;
			//위 함수와 반복된다. 위 함수를 호출하는 방식으로 Don't Repeat Yourself 가능
			break;
		}
	}
}

HitResult Ship::HitCheck(Position hitPos)
{
	for (int index = 0; index < m_CurHP; index++)
	{
		if (m_Pos[index].m_X == hitPos.m_X && m_Pos[index].m_Y == hitPos.m_Y)
		{
			m_CurHP--;
			m_Pos[index].m_X = 0;
			m_Pos[index].m_Y = 0;
		
			if (m_CurHP == 0)
			{
				return DESTROY;
			}
			else
			{
				return Hit;
			}
		}
	}

	return MISS;
}
	
void Ship::Print()
{
	std::cout << Ship::GetName() << " : ";
	for (int i = 0; i < Ship::GetMaxHP(); i++)
	{
		Position tempPos = Ship::GetPos(i);
		std::cout << tempPos.m_X << tempPos.m_Y << " ";
	}
	std::cout << std::endl;
}

bool Ship::IsValidPosition(Position head, Direction direction)
{
	switch (direction)
	{
	case East:
		if (head.m_X + Ship::GetMaxHP() <= '8')
		{
			return true;
		}
		else
		{
			return false;
		}
	case West:
		if (head.m_X - Ship::GetMaxHP() >= '1')
		{
			return true;
		}
		else
		{
			return false;
		}
	case South:
		if (head.m_Y - Ship::GetMaxHP() >= 'h')
		{
			return true;
		}
		else
		{
			return false;
		}
	case North:
		if (head.m_Y + Ship::GetMaxHP() <= 'a')
		{
			return true;
		}
		else
		{
			return false;
		}
	default:
		return false;
	}
}

std::string Ship::GetName()
{
	return m_Name;
}

int Ship::GetCurHP()
{
	return m_CurHP;
}

int Ship::GetMaxHP()
{
	return m_MaxHP;
}

Position Ship::GetPos(int index)
{
	return m_Pos[index];
}
