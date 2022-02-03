#include "Game.hpp"

#include "states/PlayState.hpp"

Game::Game()
{
    window = SDL_CreateWindow("gaem", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, 0);
    if (!window) {
        SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), nullptr);
        exit(1);
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), nullptr);
        exit(1);
    }

    setState(new PlayState(this));
}

Game::~Game()
{

}

void Game::setState(State *state)
{
    if (this->state)
        delete this->state;

    this->state = state;
}

void Game::run()
{   
    while (running) {
        processEvent();
        update();
        draw();
    }
}

void Game::processEvent()
{
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                running = false;
                break;
            default:
                break;
        }
        state->processEvent(event);
    }
}

void Game::update()
{
    state->update();
}

void Game::draw()
{
    SDL_RenderClear(renderer);
    state->draw();
    SDL_RenderPresent(renderer);
}