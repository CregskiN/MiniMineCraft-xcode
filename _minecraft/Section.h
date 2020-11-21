#pragma once
#include <vector>
#include "Block.h"
class Section
{
public:
	Section();
	~Section();
	void render();
	bool erase(int x, int y, int z);  //��������
	bool showBlock(int x, int y, int z); //��ʾ����
	bool addBlock(int type, int x, int y, int z);
private:
	Block* blockArray[16][16][16];
};

