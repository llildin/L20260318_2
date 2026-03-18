#include "Player.h"

UPlayer::UPlayer()
{
	PlayerMoveDirection = new char[4];

	PlayerMoveDirection[0] = 'w';
	PlayerMoveDirection[1] = 's';
	PlayerMoveDirection[2] = 'a';
	PlayerMoveDirection[3] = 'd';
}

UPlayer::~UPlayer()
{
}

void UPlayer::PlayerMove()
{
}
