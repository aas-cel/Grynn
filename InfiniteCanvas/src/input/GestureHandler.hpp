#pragma once
#include <StyleCPP/GestureEvent.hpp>
#include "InputManager.hpp"

class GestureHandler {
public:
    GestureHandler(InputManager& inputManager);
    void handleEvent(StyleCPP::GestureEvent* event);
private:
    InputManager& inputManager;
};
