#pragma once

#include <SDL2/SDL.h>
#include <stdint.h>
#include <string>

class Sprite;

class Texture {
private:
    SDL_Texture *m_texture = nullptr;
    uint16_t m_width, m_height;

    friend class Sprite;
public:
    Texture();
    ~Texture();

    void free();
    void loadFromFile(const std::string &path);
};