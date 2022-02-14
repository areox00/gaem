#include "Game.hpp"

#include "states/PlayState.hpp"
#include "resources.hpp"

Game::Game()
{
    initWindowAndRenderer();
    setState(new PlayState(this));
}

Game::~Game()
{

}

void Game::setState(State *state)
{
    if (m_state)
        delete m_state;

    m_state = state;
}

void Game::run()
{
    while (m_running) {
        processEvent();
        update();
        draw();
    }
}

void Game::processEvent()
{
    while (SDL_PollEvent(&m_event)) {
        switch (m_event.type) {
            case SDL_QUIT:
                m_running = false;
                break;
            default:
                break;
        }
        m_state->processEvent(m_event);
    }
}

void Game::update()
{
    m_state->update();
}

void Game::draw()
{
    SDL_RenderClear(g_renderer);
    m_state->draw();
    SDL_RenderPresent(g_renderer);
}