#include "../../Header/Gameplay/GameplayManager.h"
using namespace Gameplay;

void GameplayManager::initialize()
{
	ball = new Ball();
}

GameplayManager::GameplayManager()
{
	initialize();
}

void GameplayManager::update()
{
	ball->update();
}

void GameplayManager::render(RenderWindow* game_window)
{
	ball->render(game_window);
}
