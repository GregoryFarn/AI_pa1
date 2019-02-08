#include "node.h"

Node::Node(State state)
{
	curr = state;
	genChild();
}

void Node::genChild()
{
	for (pair i : curr.getNotCPos()) {
		State temp(curr, i.x, i.y);
		if (temp.calcLeg()) {
			child.push_back(temp);
		}
		child.push_back();
	}
}

int Node::dfsSearch()
{
	return 0;
}

int Node::aStar()
{
	return 0;
}
