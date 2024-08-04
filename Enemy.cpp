#include <Novice.h>
#include "Enemy.h"

Enemy::Enemy(Vector2 pos, int s, int r, int isAlive)
{
	pos_ = pos;
	radius_ = r;
	speed_ = s;
	isAlive_ = isAlive;
}

void Enemy::Update() {
	pos_.x += speed_;

	// 画面端に当たったら反対に移動
	if (pos_.x - radius_ <= 0 || pos_.x + radius_ >= 1280)speed_ *= -1;
}


void Enemy::Draw() {
	int enR = Novice::LoadTexture("./images/enemy0.png");
	Novice::DrawSprite((int)pos_.x - radius_ - radius_, (int)pos_.y - radius_ - radius_, enR, 1, 1, 0.0f, WHITE);
	//Novice::DrawEllipse((int)pos_.x, (int)pos_.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
}
