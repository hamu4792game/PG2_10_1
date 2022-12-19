#include "Player.h"
#include <Novice.h>

Player::Player() {
	transform.x = 100 - 50;
	transform.y = 100;
	transform.rad = 50;
	speed = 10;
}

void Player::Move(char* key) {
	if (key[DIK_D])
	{
		transform.x += speed;
	}
	if (key[DIK_A])
	{
		transform.x -= speed;
	}
	if (key[DIK_S])
	{
		transform.y += speed;
	}
	if (key[DIK_W])
	{
		transform.y -= speed;
	}

	Limit();
}

void Player::Limit() {
	if (transform.x - transform.rad <= 0)
	{
		transform.x = transform.rad;
	}
	else if (transform.x + transform.rad >= 1280)
	{
		transform.x = 1280 - transform.rad;
	}

	if (transform.y - transform.rad <= 0)
	{
		transform.y = transform.rad;
	}
	else if (transform.y + transform.rad >= 720)
	{
		transform.y = 720 - transform.rad;
	}
}

void Player::Draw() {
	Novice::DrawEllipse(transform.x, transform.y, transform.rad, transform.rad, 0.0f, 0xffffffff, kFillModeSolid);
}