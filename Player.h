#pragma once
class UPlayer
{
public:
	UPlayer();
	~UPlayer();

	int X;
	int Y;
	char* MoveDirection;

	void Move();
};

