#pragma once
#include <SDL.h>
#include "../Objects/Object.hpp"
class InputHandler {
public:
	void poll_events(Object& object, Matrix* matrix);
	InputHandler();
private:
	SDL_Event input_event;
};