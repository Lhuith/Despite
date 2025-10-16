#ifndef OBJ_HEADER_H
#define OBJ_HEADER_H

#include <SFML/Graphics.hpp>
#include <iostream>

#include "macros.hpp"

class Obj {
    sf::Sprite s;

   public:
    void Test();

    void Update();

    void MoveUp() noexcept;
    void MoveDown() noexcept;
    void MoveLeft() noexcept;
    void MoveRight() noexcept;
};

#endif     // OBJ_HEADER_H