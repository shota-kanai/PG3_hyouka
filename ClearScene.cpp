#include <Novice.h>
#include "ClearScene.h"

void ClearScene::Init(){}

void ClearScene::Update(char* keys, char* preKeys)
{
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw()
{
	//クリア画面表示
	int clR = Novice::LoadTexture("./images/bg.png");
	Novice::DrawSprite(0, 0, clR, 1, 1, 0.0f, WHITE);
	//Novice::DrawBox(0, 0, 1280, 720, 0.0f, 0xffff0000, kFillModeSolid);
	Novice::ScreenPrintf(600,360,"Game Clear!!");
}