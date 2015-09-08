#include "Tree.hpp"
#include "Record.hpp"

int main()
{
	// root layer
	Record root("Factory");

	Tree tree = Tree(root);
	
	// second layer
	tree.AddRecord(0, Record("Distributor_1"));
	tree.AddRecord(0, Record("Distributor_2"));
	tree.AddRecord(0, Record("Distributor_3"));

	// third layer
	tree.AddRecord(1, Record("Shop_1"));
	tree.AddRecord(1, Record("Shop_2"));
	tree.AddRecord(1, Record("Shop_3"));

	tree.AddRecord(2, Record("Shop_4"));

	tree.AddRecord(3, Record("Shop_5"));
	tree.AddRecord(3, Record("Shop_6"));

	tree.Print();

	return 0;
}