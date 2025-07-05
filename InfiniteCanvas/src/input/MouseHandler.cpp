#include "MouseHandler.hpp"

MouseHandler::MouseHandler(InputManager& inputManager) : inputManager(inputManager) {}

void MouseHandler::handleEvent(StyleCPP::MouseEvent* event) {
    if (event->type() == StyleCPP::EventType::MousePress) {
        inputManager.handleMousePress(event->x(), event->y(), event->button());
    } else if (event->type() == StyleCPP::EventType::MouseMove) {
        inputManager.handleMouseMove(event->x(), event->y(), event->button());
    } else if (event->type() == StyleCPP::EventType::MouseRelease) {
        inputManager.handleMouseRelease(event->x(), event->y(), event->button());
    }
}
