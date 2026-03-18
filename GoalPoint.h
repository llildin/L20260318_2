#pragma once
class UGoalPoint
{
public:
	UGoalPoint();
	~UGoalPoint();

	int X;
	int Y;

	void GameEnd(int PlayerX, int PlayerY);
};

