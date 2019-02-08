#include "State.h"
#include "pch.h"

State::State(int * tList, int * cList,int tLen,int cLen)
{
	for (int i = 0; i < tlen; i+=2) {
		pair coor;
		coor.x = tList[i];
		coor.y = tLIst[i + 1];
		this->tpos.push_back(coor);
	}
	for (int i = 0; i < clen; i += 2) {
		pair coor;
		coor.x = cList[i];
		coor.y = cList[i + 1];
		this->cpos.push_back(coor);
	}
}

State::State(State x, int cx, int cy)
{
	tPos(x.getTPos());
	cPos(x.getCPos());
	pair coor;
	coor.x = cx;
	coor.y = cy;
	cPos.push_back(coor);
	cNum = x.getCNum() + 1;
	tNum = x.getTNum();
	imgs = x.getImgs() + 1;
	leg = calcLeg();
	
}

int State::getImgs()
{
	return imgs;
}

bool State::calcLeg()
{

	return leg;
}

int State::getCNum()
{
	return cNum;
}

int State::getTNum()
{
	return tNum;
}

vector<pair> State::getTPos()
{
	return tPos;
}

vector<pair> State::getCPos()
{
	return cPos;
}

vector<pair> State::getNotCPos()
{
	return notCPos;
}
