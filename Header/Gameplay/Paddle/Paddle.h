#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/GameplayManager.h"
using namespace sf;

class Paddle
{
private:
    RectangleShape paddle_sprite;

    const float paddle_width = 20.0f;
    const float paddle_height = 140.0f;

public:
    Paddle(float position_x, float position_y);
    void render(RenderWindow* game_window);

private:
    const float paddleSpeed = 0.5f;

    void movePaddle(bool move_up_key_pressed, bool move_down_key_pressed);

public:
    void update(bool move_up_key_pressed, bool move_down_key_pressed);
};