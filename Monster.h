#pragma once
class UMonster
{
public:
	UMonster();
	~UMonster();

	int X;
	int Y;
	char* MoveDirection;

	void Move();
};

