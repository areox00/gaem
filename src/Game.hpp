#pragma once

#include "states/State.hpp"

class Game {
private:
    SDL_Event m_event;

    bool m_running = true;

    State *m_state = nullptr;
public:
    Game();
    ~Game();

    void setState(State *state);

    void run();
    void processEvent();
    void update();
    void draw();
};