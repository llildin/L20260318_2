#pragma once
class UPlayer
{
public:
	UPlayer();
	~UPlayer();

	int PlayerX;
	int PlayerY;
	char* PlayerMoveDirection;

	void PlayerMove();
};

