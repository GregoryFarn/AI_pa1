#include "State.h"

class Node {
public:
	Node(State state);
	void genChild();
	int dfsSearch();
	int aStar();
private:
	State curr;
	vector<Node> child;
};