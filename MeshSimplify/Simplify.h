#pragma once
#include "edgeHeap.h"
#include "vertexGroup.h"
#include "solve.h"
#include <string>

using namespace std;

class Simplify
{
	double ratio;
	int cntFace, cntDelFace;
	EdgeHeap* eHeap;
	VertexGroup* vGroup;
public:
	Simplify(void);
	~Simplify(void);

	void setRatio(double);
	void setLeftFaceNum(int);

	void input();
	void start();
	void output();

	glm::mat4 calVertexDelta(int);
	glm::vec3 calVertexPos(Edge&, glm::mat4); // ����һ��������������������������ĵ�λ��

	void calVAndDeltaV(Edge&);  //���㲢ȷ��һ���ߵ�v��deltaV;
};