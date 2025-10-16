
#include "obj.hpp"

void Obj::Test() {
    _MSG("this is an obj test");
}

void Obj::Update() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
        MoveDown();
    }
}

void Obj::MoveUp() noexcept {
}
void Obj::MoveDown() noexcept {
}
void Obj::MoveLeft() noexcept {
}
void Obj::MoveRight() noexcept {
}