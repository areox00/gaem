#pragma once

#include <SDL2/SDL.h>

class Game;

class State {
protected:
    Game *m_game;
public:
    State(Game *game);
    virtual ~State();

    virtual void processEvent(SDL_Event &event) = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
};