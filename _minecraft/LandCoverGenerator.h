#pragma once
#include "Chunk.h"
#include "BlockGenerator.h"
static class LandCoverGenerator
{
public:
	static void waterGenerator(Chunk* chunk);  //��������
	static void landCoverGenerator(Chunk* chunk);  //��������
	static void plandGenerator(Chunk* chunk);  //ֲ������
	static void buildGenerator(Chunk* chunk); //��������
	static void singleGenerator(Chunk* chunk, Point3 point);  //���ɵ�������
	static BlockGenerator* gen;
};

