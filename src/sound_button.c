/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** sound_button
*/

#include "rpg.h"

void load_sound_button(game_t *game)
{
    game->sound->clic_button = sfSound_create();
    game->sound->gold_button = sfSound_create();
    game->sound->map_sound = sfSound_create();
    game->sound->map_close = sfSound_create();
    game->sound->button_buf_clic =
    sfSoundBuffer_createFromFile("assets/button_sound.wav");
    game->sound->gold_buf_but =
    sfSoundBuffer_createFromFile("assets/piece_sound.wav");
    game->sound->map_buffer =
    sfSoundBuffer_createFromFile("assets/open_map.wav");
    game->sound->map_close_buf =
    sfSoundBuffer_createFromFile("assets/crampled_paper.wav");
    sfSound_setBuffer(game->sound->clic_button, game->sound->button_buf_clic);
    sfSound_setBuffer(game->sound->gold_button, game->sound->gold_buf_but);
    sfSound_setBuffer(game->sound->map_sound, game->sound->map_buffer);
    sfSound_setBuffer(game->sound->map_close, game->sound->map_close_buf);
}

void gold_sound(game_t *game)
{
    sfSound_play(game->sound->gold_button);
}

void clic_sound(game_t *game)
{
    sfSound_play(game->sound->clic_button);
}

void map_sound(game_t *game)
{
    sfSound_play(game->sound->map_sound);
}

void close_map_sound(game_t *game)
{
    sfSound_play(game->sound->map_close);
}
