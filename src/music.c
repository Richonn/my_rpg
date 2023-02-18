/*
** EPITECH PROJECT, 2022
** music.c
** File description:
** music
*/

#include "rpg.h"

void load_music(game_t *game)
{
    game->music->menu_music =
    sfMusic_createFromFile("assets/music_main_menu.wav");
    game->music->game_music =
    sfMusic_createFromFile("assets/game_music.wav");
    sfMusic_setLoop(game->music->menu_music, sfTrue);
    sfMusic_setLoop(game->music->game_music, sfTrue);
}

void play_game_music(game_t *game)
{
    sfMusic_play(game->music->game_music);
}

void play_menu_music(game_t *game)
{
    sfMusic_play(game->music->menu_music);
}
