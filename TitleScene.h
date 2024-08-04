#pragma once
#include "IScene.h"

class TitleScene :public IScene/*ISceneをパブリック継承してStageSceneクラスを定義*/
{
public:
	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
	/* 継承したInit、Update、Draw関数をoverride定義*/
};
