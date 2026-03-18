#pragma once
class UMonster
{
public:
	UMonster();
	~UMonster();

	int MonsterX;
	int MonsterY;
	char* MonsterMoveDirection;

	void MonsterMove();
};

