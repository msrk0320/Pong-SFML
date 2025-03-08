#pragma once
#include "../../Header/Gameplay/Ball/Ball.h"
#include "../../Header/Gameplay/Paddle/Paddle.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/Gameplay/Boundary/Boundary.h"

using namespace Event;

namespace Gameplay
{
	class GameplayManager
	{
	private:
		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;

		Ball* ball;
		Paddle* player1;
		Paddle* player2;
		Boundary* boundary;

	private:
		void initialize();
		EventManager* event_manager;

	public:
		//Make this eventManager different spell than event_Manager
		GameplayManager(EventManager* eventManager);
		void update();
		void render(RenderWindow* game_window);
	};
}