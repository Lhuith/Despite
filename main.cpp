
#include <SFML/Graphics.hpp>
#include <iostream>

#include "constants.hpp"
#include "obj.hpp"

int main() {
    sf::Texture test;
    if (!test.loadFromFile("../img/test/c1 0002.png")) {
        std::cout << "error loading texture" << std::endl;
    }
    std::cout << "Hello from Test" << std::endl;

    //  GAME WINDOW

    sf::RenderWindow game_window({{CONSTANTS::window_width, CONSTANTS::window_height}, "Alaran"});

    // LOOP
    sf::Sprite sprite;
    sprite.setTexture(test);

    Obj player = Obj();
    player.Test();

    while (game_window.isOpen()) {
        // clear the screen
        game_window.clear(sf::Color::Black);

        game_window.draw(sprite);

        // check for any events since the last loop iteration
        sf::Event event;

        // if the user pressed "escape", or clicked on "close", we close the window
        // this will terminate the program
        while (game_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                game_window.close();
        }

        // check for user input
        // if the user presses "escape", we jump out of the loop
        // this will terminate the program
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
            break;

        player.Update();

        game_window.display();
    }

    return 0;
}
