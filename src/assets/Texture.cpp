#include "Texture.hpp"

#include <SDL2/SDL_image.h>
#include "resources.hpp"

Texture::Texture()
{

}

Texture::~Texture()
{

}

void Texture::free()
{

}

void Texture::loadFromFile(const std::string &path)
{
    SDL_Surface *surface = IMG_Load(path.c_str());
    if (!surface) {
        SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), nullptr);
        exit(1);
    }
    m_texture = SDL_CreateTextureFromSurface(g_renderer, surface);
    if (!m_texture) {
        SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), nullptr);
        exit(1);
    }
    m_width = surface->w;
    m_height = surface->h;

    SDL_FreeSurface(surface);
}