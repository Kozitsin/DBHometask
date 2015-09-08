#include "Tree.hpp"
#include <iostream>

Tree::Tree(Record record)
{
	tree.push_back(record);
}

void Tree::AddRecord(int parent, Record record)
{

	tree.push_back(record);
	tree[parent].children.push_back(tree.size() - 1);
}

void Tree::Print()
{
	for (size_t i = 0; i < tree.size(); i++)
	{
		std::cout << "Name: " << tree[i].name << std::endl;
		for (size_t j = 0; j < tree[i].children.size(); j++)
		{
			std::cout << "Name: " << tree[tree[i].children[j]].name << '\t';
		}
		std::cout << std::endl;
	}
}
