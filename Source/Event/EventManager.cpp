#include "../../Header/Event/EventManager.h"

using namespace Event;

void EventManager::pollEvents(RenderWindow* game_window)
{
    sf::Event event;
    while (game_window->pollEvent(event)) {

        /*if (isMouseClicked())
        {
            if (Mouse::isButtonPressed(Mouse::Left))
                cout << "Left";
            else if(Mouse::isButtonPressed(Mouse::Right))
                cout << "Right";
        }*/

        if (isLeftMouseButtonClicked())
        {
            Vector2i position = Mouse::getPosition(*game_window);
            cout << "Left Mouse Clicked at: " << position.x << "," << position.y << endl;
        }

        // Check for Escape key
        if (isKeyPressed(sf::Keyboard::Escape)) {
            game_window->close();
        }
    }
}

bool EventManager::isKeyPressed(sf::Keyboard::Key key)
{
    return sf::Keyboard::isKeyPressed(key);
}

bool EventManager::isLeftMouseButtonClicked()
{
    // Detect if the left mouse button is clicked
    return (Mouse::isButtonPressed(Mouse::Left));
}

bool EventManager::isMouseClicked()
{
    return (Mouse::isButtonPressed);
}
