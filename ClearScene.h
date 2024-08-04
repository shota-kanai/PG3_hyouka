#pragma once
#include "IScene.h"

class ClearScene :public IScene/*ISceneをパブリック継承してClearSceneクラスを定義*/ 
{
public:
	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
	/* 継承したInit、Update、Draw関数をoverride定義*/
};
