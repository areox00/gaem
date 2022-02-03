#pragma once

#include "State.hpp"

class PlayState : public State {
private:

public:
    PlayState(Game *game);
    ~PlayState();

    void processEvent(SDL_Event &event);
    void update();
    void draw();
};