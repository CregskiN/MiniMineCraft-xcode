#pragma once
#include "Model.h"
class SingletonModel
{
public:
	static Model* getGrassModel(); //��
	static Model* getSoilModel();   //��
	static Model* getSandModel();  //ɳ
	static Model* getGlassModel(); //����
	static Model* getDandelionModel(); //��
	static Model* getSnowModel(); //ѩ
	static Model* getSunflowerModel();
	static Model* getWinterJasmineModel();
	static Model* getTulipModel();
	static Model* getRoseModel();
	static Model* getTallGrass();
	static Model* getStoneModel();
	static Model* getWaterModel();
private:
	SingletonModel();
	static Model* grassModel;
	static Model* soilModel;
	static Model* sandModel;
	static Model* glassModel;
	static Model* dandelion; //�ѹ�Ӣ
	static Model* snowModel;
	static Model* sunflower;  //���տ�
	static Model* winterJasmine;  //ӭ����
	static Model* tulip;  //������
	static Model* rose; //õ��
	static Model* tallGrass; //�ݣ�ֲ�
	static Model* stoneModel;
	static Model* waterModel;

};

