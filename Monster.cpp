#include "Monster.h"

UMonster::UMonster()
{
	MonsterMoveDirection = new char[4];

	MonsterMoveDirection[0] = 'w';
	MonsterMoveDirection[1] = 's';
	MonsterMoveDirection[2] = 'a';
	MonsterMoveDirection[3] = 'd';
}

UMonster::~UMonster()
{
}

void UMonster::MonsterMove()
{
}
