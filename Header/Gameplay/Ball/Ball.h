#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

namespace Gameplay
{
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

    public:
        Ball();
        void update();
        void render(RenderWindow* game_window);
        void loadTexture();
        void initializeVariables();

    private:
        float ball_speed = .5f;
        Vector2f velocity = Vector2f(ball_speed, ball_speed);

    private:
        void move();
    };
}