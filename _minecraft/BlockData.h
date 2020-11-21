#pragma once
#include <vector>
#include "Point.h"

class BlockData
{
	/*����block�еĶ������ꡢ�������ꡢ����ͼƬ�����Լ���������*/
public:
	BlockData();
	~BlockData();
	
	bool collidable = false;  //�Ƿ�������ײ
	bool opaque = true;  //�Ƿ�͸��
	void setTexImgLoc(std::vector<Point2> texImgLoc);
	void setLoc(Point3* point);
	Point3* getLoc();
private:
	std::vector<Point2> texImgLoc;
	Point3* loc = new Point3();  //block����(x, y, z)(���ĵ�)
};

