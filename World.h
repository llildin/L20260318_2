#pragma once
#include "Player.h"
#include "Monster.h"
#include "GoalPoint.h"

class UWorld
{
public:
	UWorld();
	~UWorld();

	int SizeX;
	int SizeY;
	int Wall;
	int Ground;
	UPlayer Player;
	UMonster Monster;
	UGoalPoint GoalPoint;
};

