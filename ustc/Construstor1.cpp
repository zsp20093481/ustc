#include <iostream>
using namespace std;

class Tree
{
	int height;
public:
	Tree(int initialHeight);
	~Tree();
	void grow(int years);
	void printsize();
};

Tree::Tree(int initialHeight)
{
	height = initialHeight;
}

Tree::~Tree()
{
	cout << "inside Tree destructor" << endl;
	printsize();
}

void Tree::grow(int years)
{
	height += years;
}

void Tree::printsize()
{
	cout << "Tree height is " << height << endl;
}
