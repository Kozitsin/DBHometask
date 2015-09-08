#pragma once

#include "Record.hpp"
#include <vector>

class Tree
{
public:
	std::vector<Record> tree;

	Tree(Record);

	void AddRecord(int, Record);
	void Print();
};