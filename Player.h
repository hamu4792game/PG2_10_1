#pragma once
#include "Transform.h"
class Player
{
public:
	Player();
private:
	Transform transform;
	int speed;
public:
	void Move(char* key);
	//	�ړ�����
	void Limit();
	void Draw();

};

