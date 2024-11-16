#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

class UIService
{
private:
    
    Font font;
    Text left_score_text;
    Text right_score_text;

    string texture_path = "Assets/Fonts/Aloevera-OVoWO.ttf";
    
    int font_size = 40;
    Color font_color = Color::White;
    string initial_string = "00";

    float left_score_postion_x = 580.0f;
    float left_score_postion_y = 30.0f;

    float right_score_position_x = 660.0f;
    float right_score_position_y = 30.0f;
    
    int player1_score = 0; // TODO: Should be Player 1 score &* Player 3 score instead of left and right
    int player2_score = 0;

    string formatScore(int score);

    void loadFontTexture();
    void createLeftScoreText();
    void createRightScoreText();

public:

	UIService();

    void incrementPlayer1Score();
    void incrementPlayer2Score();

    void update();
    void render(RenderWindow& window); // TODO: render()
};