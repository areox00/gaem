project('gaem', 'cpp')

deps = [
    dependency('sdl2'),
    dependency('SDL2_image'),
]

src = [
    'src/main.cpp',

    'src/Resources.cpp',

    'src/Game.cpp',
    'src/states/State.cpp',
    'src/states/PlayState.cpp',

    'src/assets/Texture.cpp',
    'src/assets/Sprite.cpp'
]

executable('gaem', src, include_directories : 'src', dependencies : deps)