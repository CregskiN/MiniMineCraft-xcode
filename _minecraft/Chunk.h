#pragma once
#include <vector>
#include <map>
#include <unordered_map>
//#include <unordered_map>
#include "Block.h"
using namespace std;
class Chunk
{
public:
	Chunk();
	Chunk(int x, int z);
	~Chunk();
	void render();
	void setLoc(int x, int z);
	Point3* getLoc();
	Point3* getCenterLoc();
	unordered_map<string, Block*>* getBlockMapAddress();
	unordered_map<string, Block*> getBlockMap();
	unordered_map<string, Block*> getTransparentBlockMap();
	unordered_map<string, Block*>* getTransparentBlockMapAddress();

	Block* getBlockAt(Point3 point);
	Block* getHeadBlockAt(Point3 point);
	Block* getTopBlockAt(Point2 point);  //��ȡx, zλ�õĶ���Ԫ��
	
	int getHeightAt(Point2 point);
	void setMinHeight(int height);
	void setMaxHeight(int height);
	int getMinHeight();
	int getMaxHeight();

	bool erase(string id);  //��������
	bool showBlock(string id); //��ʾ����
	bool hidenBlock(string id); //���ط���
	bool addBlock(int type, Point3 loc);

	map<vector<int>, float> heightMap; //��Ϊ{x,z}��ֵΪh
private:
	unordered_map<string, Block*> blockMap;  //����͸��ɫ��block
	unordered_map<string, Block*> transparentBlockMap;  //��͸��ɫ��block
	Point3* loc = new Point3(0, 0, 0); //chunk��chunk����ϵ�µ����Ͻǣ�x,z)����
	Point3* centerLoc = new Point3(8, 0, 8);  //

	int minHeight = 0;
	int maxHeight = 0;

	glm::vec3 scale;
	glm::mat4 projection;
	glm::mat4 view;
	glm::mat4 model;
	glm::vec3 lightPos;
	glm::vec3 cameraPos;
};

