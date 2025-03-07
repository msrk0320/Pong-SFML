#pragma once
#include "../../Header/Gameplay/Paddle/Paddle.h"
#include "../../Header/Gameplay/Ball/Ball.h"
#include "../../Header/Event/EventManager.h"

using namespace Event;

namespace Gameplay
{
	class GameplayManager
	{
		//data members
	private:
		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;

		Ball* ball;
		Paddle* player1;
		Paddle* player2;

	private:
		void initialize();
		EventManager* event_manager;

	public:
		GameplayManager();
		void update();
		void render(RenderWindow* game_window);
	};
}