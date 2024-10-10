#include "Stage.h"

const int WIDHT = 12;
const int HEIGET = 8;
//const‚Í•Ï‚¦‚ç‚ê‚È‚­‚·‚éŠÖ”A•Ï‚¦‚æ‚¤‚Æ‚·‚é‚Æ•Ï‚¦‚½‚Æ‚±‚ë‚ªƒGƒ‰[‚É‚È‚é
int map[12][8] = {
	{1,0,1,0,1,0,1,0,},
	{0,1,0,1,0,1,0,1,},
	{1,0,1,0,1,0,1,0,},
	{0,1,0,1,0,1,0,1,},
	{1,0,1,0,1,2,1,0,},
	{0,1,0,1,0,1,0,1,},
	{1,0,1,0,1,0,1,0,},
	{0,1,0,1,0,1,0,1,},
	{1,0,1,0,1,0,1,0,},
	{0,1,0,1,0,1,0,1,},
	{1,0,1,0,1,0,1,0,},
	{0,1,0,1,0,1,0,1,},
};

Stage::Stage()
{
	hImage = LoadGraph("data/image/parts.png");
}

Stage::~Stage()
{
}

void Stage::Draw()
{
	for (int j = 0; j < 12; j++) {
		int x = j * 40 + 100;
		for (int i = 0; i < 8; i++) {
			int y = i * 40 + 100;
			if (map[j][i] == 1) {
				DrawRectGraph(x, y, 0, 40, 40, 40, hImage, TRUE);
			}
			if (map[j][i] == 2) {
				DrawRectGraph(x, y,120, 0, 40, 40, hImage, TRUE);
			}
		}
	}
}
