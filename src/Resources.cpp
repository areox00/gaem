#include "Resources.hpp"

SDL_Window *g_window = nullptr;
SDL_Renderer *g_renderer = nullptr;

void initWindowAndRenderer()
{
    g_window = SDL_CreateWindow("gaem", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, 0);
    if (!g_window) {
        SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), nullptr);
        exit(1);
    }

    g_renderer = SDL_CreateRenderer(g_window, -1, SDL_RENDERER_ACCELERATED);
    if (!g_renderer) {
        SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), nullptr);
        exit(1);
    }
}