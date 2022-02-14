#include "Sprite.hpp"

#include "Resources.hpp"

Sprite::Sprite()
{

}

Sprite::~Sprite()
{

}

void Sprite::setPosition(float x, float y)
{
    m_rect.x = x;
    m_rect.y = y;
}

void Sprite::setTexture(Texture &texture)
{
    m_texture = &texture;
    m_rect.w = texture.m_width;
    m_rect.h = texture.m_height;
}

void Sprite::render()
{
    SDL_RenderCopyExF(g_renderer, m_texture->m_texture, nullptr, &m_rect, 0, nullptr, SDL_FLIP_NONE);
}