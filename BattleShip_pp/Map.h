#pragma once
#include <string>
class Map
{
public:
	Map();
	~Map();

public:
	bool IsEmpty();
	std::string GetOwnerName();

private:
	bool map[8][8]; //true if empty, false if ship exists
	std::string ownerName();
};

