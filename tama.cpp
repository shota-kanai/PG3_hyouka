#include "tama.h"
#include "Novice.h"

Bullet::Bullet(Vector2 pos, int speed, int r, bool isShot)
{
	pos_ = pos;
	speed_ = speed;
	r_ = r;
	isShot_ = isShot;
}

void Bullet::Update()
{
	if (isShot_ == true)
	{
		pos_.y -= speed_;
		if (pos_.y <= 0)
		{
			isShot_ = false;
		}
	}
}

void Bullet::Draw()
{
	if (isShot_ == true)
	{
		int tmR = Novice::LoadTexture("./images/shoot.png");
		Novice::DrawSprite((int)pos_.x-r_ - r_, (int)pos_.y - r_ - r_, tmR, 1, 1, 0.0f, WHITE);
		//Novice::DrawEllipse((int)pos_.x, (int)pos_.y, r_, r_, 0.0f, WHITE, kFillModeSolid);
	}
}
