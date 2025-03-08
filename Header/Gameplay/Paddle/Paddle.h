#pragma once
#include<SFML/Graphics.hpp>
#include "../../Header/Gameplay/Boundary/Boundary.h"

using namespace sf;
using namespace std;

namespace Gameplay {
    class Paddle
    {
    private:
        RectangleShape paddle_sprite;

        const float paddle_width = 20.0f;
        const float paddle_height = 140.0f;
        const float paddleSpeed = 0.5f;

        const float top_boundary = 20.0f;
        const float bottom_boundary = 700.0f;

        const float left_boundary = 0.0f;
        const float right_boundary = 1280.0f;

        const int speedMultiplier = 10;

        void createPaddle(float position_x, float Position_y);


        void movePaddle(bool move_up_key_pressed, bool move_down_key_pressed);
    
    public:
        Paddle(float position_x, float position_y);

        RectangleShape getPaddleSprite();
        void reset(float position_x, float position_y);

        void update(bool move_up_key_pressed, bool move_down_key_pressed);
        void render(RenderWindow* game_window);
    };
}