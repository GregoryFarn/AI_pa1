#pragma once
#include "pch.h"
#include <vector>

struct pair {
	int x;
	int y;
};
class State {
public:
	State(int * tlist, int * cList, int tLen, int cLen);
	State(State x, int cx, int cy);
	int getImgs();
	bool calcLeg();
	int getCNum();
	int getTNum();
	std::vector<pair> getTPos();
	std::vector<pair> getCPos();
	std::vector<pair> getNotCPos();
private:
	std::vector<pair> tPos;
	std::vector<pair> cPos;
	std::vector<pair> notCPos;
	bool leg;
	int cNum;
	int tNum;
	int imgs;

};