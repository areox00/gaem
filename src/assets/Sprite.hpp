#pragma once

#include "Texture.hpp"

class Sprite {
private:
    SDL_FRect m_rect;
    Texture *m_texture;
public:
    Sprite();
    ~Sprite();

    void setPosition(float x, float y);
    void setTexture(Texture &texture);
    void render();
};