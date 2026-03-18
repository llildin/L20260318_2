#include "Player.h"

UPlayer::UPlayer()
{
	MoveDirection = new char[4];

	MoveDirection[0] = 'w';
	MoveDirection[1] = 's';
	MoveDirection[2] = 'a';
	MoveDirection[3] = 'd';
}

UPlayer::~UPlayer()
{
}

void UPlayer::Move()
{
}
