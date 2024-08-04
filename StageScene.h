#pragma once
#include "IScene.h"
#include "Vector2.h"
#include "Player.h"
#include "Enemy.h"

class StageScene :public IScene/*ISceneをパブリック継承してStageSceneクラスを定義*/
{
public:
	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
	~StageScene();
	/* 継承したInit、Update、Draw関数をoverride定義*/

public:
	Player* player_;
	Enemy* enemy_;
};