#pragma once

#include <string>
#include <vector>

class Record
{
public:
	std::string name;
	std::vector<int> children;

	Record(std::string name)
	{
		this->name = name;
	}
};
