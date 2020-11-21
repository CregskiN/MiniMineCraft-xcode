#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string.h>
#include <iostream>
using namespace std;

class CubemapTexture
{
public:
	CubemapTexture(
		const string& Directory,
		const string& PosXFilename,
		const string& NegXFilename,
		const string& PosYFilename,
		const string& NegYFilename,
		const string& PosZFilename,
		const string& NegZFilename);
	~CubemapTexture();
	bool Load();
	void Bind(GLenum TextureUnit);
private:
	string m_fileNames[6];  // ��պ����������ͼ
	GLuint m_textureObj;  // �������
	int width; //��պ���ͼ���
	int height; //��պ���ͼ�߶�
	int channel; //��պ���ͼͨ����
};

