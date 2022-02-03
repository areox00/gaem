project('gaem', 'cpp')

deps = [
    dependency('sdl2')
]

src = [
    'src/main.cpp',

    'src/Game.cpp',
    'src/states/State.cpp',
    'src/states/PlayState.cpp'
]

executable('gaem', src, include_directories : 'src', dependencies : deps)