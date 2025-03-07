#pragma once
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

		float player2_position_x = 1210.0f;
		float player2_position_y = 300.0f;

		Ball* ball;

	private:
		void initialize();
		EventManager* event_manager;

	public:
		GameplayManager();
		void update();
		void render(RenderWindow* game_window);
	};
}