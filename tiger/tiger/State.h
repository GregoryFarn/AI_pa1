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
	vector<pair> getTPos();
	vector<pair> getCPos();
	vector<pair> getNotCPos();
private:
	vector<pair> tPos;
	vector<pair> cPos;
	vector<pair> notCPos;
	bool leg;
	int cNum;
	int tNum;
	int imgs;

};