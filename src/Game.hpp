#pragma once

#include "states/State.hpp"

class Game {
private:
    SDL_Window *window = nullptr;
    SDL_Renderer *renderer = nullptr;
    SDL_Event event;

    bool running = true;

    State *state = nullptr;

    friend class PlayState;
public:
    Game();
    ~Game();

    void setState(State *state);

    void run();
    void processEvent();
    void update();
    void draw();
};