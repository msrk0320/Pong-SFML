#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"

using namespace sf;
using namespace std;

namespace Gameplay
{
    enum class BallState
    {
        Idle,
        Moving
    };

    class Ball
    {
    private:
        const float position_x = 615.0f;
        const float position_y = 335.0f;

        Texture pong_ball_texture;
        const string texture_path = "Assets/Textures/Ball.png";
        Sprite pong_ball_sprite;
        const float scale_x = 0.05f; // 20% of original size
        const float scale_y = 0.05f; // 20% of original size

        const float top_boundary = 20.0f;
        const float bottom_boundary = 700.0f;

        const float left_boundary = 0.0f;
        const float right_boundary = 1280.0f;

        const float speedMultiplier = 10.0f;

        //Center Position
        const float center_position_x = 615.0f;
        const float center_position_y = 325.0f;
        
        float elapsed_delay_time=2.0f;
        float delay_duration=0.0f;

        BallState currentState;


    public:
        Ball();
        void initialize();
        void handlePaddleCollision(Paddle* player1, Paddle* player2);
        void handleBoudaryCollision();
        void handleOutofBoundCollision();
        void reset();
        void update(Paddle* player1, Paddle* player2);
        void onCollision(Paddle* player1, Paddle* player2);
        void render(RenderWindow* game_window);

    private:
        float ball_speed = .05f;
        Vector2f velocity = Vector2f(ball_speed, ball_speed);

    private:
        void move();
    };
}