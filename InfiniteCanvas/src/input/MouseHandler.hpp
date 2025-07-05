#pragma once
#include <StyleCPP/MouseEvent.hpp>
#include "InputManager.hpp"

class MouseHandler {
public:
    MouseHandler(InputManager& inputManager);
    void handleEvent(StyleCPP::MouseEvent* event);
private:
    InputManager& inputManager;
};
