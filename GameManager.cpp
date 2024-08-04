#include "GameManager.h"
using namespace std;

GameManager::GameManager()
{
	sceneArr_[TITLE] = make_unique<TitleScene>()/*TitleSceneを実体化*/ ;
	sceneArr_[STAGE] = make_unique<StageScene>()/*StageSceneを実体化*/;
	sceneArr_[CLEAR] = make_unique<ClearScene>()/*ClearSceneを実体化*/;

	currentSceneNo_ = TITLE;
}

GameManager::~GameManager()
{
}

int GameManager::Run(char* keys, char* preKeys)
{
	prevSceneNo_ = currentSceneNo_;
	currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

	if (prevSceneNo_ != currentSceneNo_)
	{
		sceneArr_[currentSceneNo_]->Init();
	}

	sceneArr_[currentSceneNo_]->Update(keys, preKeys);
	sceneArr_[currentSceneNo_]->Draw();

	return 0;
}