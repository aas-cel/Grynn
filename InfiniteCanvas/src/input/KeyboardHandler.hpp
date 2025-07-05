#pragma once
#include <StyleCPP/KeyEvent.hpp>
#include "InputManager.hpp"

class KeyboardHandler {
public:
    KeyboardHandler(InputManager& inputManager);
    void handleEvent(StyleCPP::KeyEvent* event);
private:
    InputManager& inputManager;
};
