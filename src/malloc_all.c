/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** malloc_all
*/

#include <stdlib.h>
#include "rpg.h"

void malloc_all(game_t *game)
{
    game->start = malloc(sizeof(start_t));
    game->htp = malloc(sizeof(htp_t));
    game->main_game = malloc(sizeof(main_game_t));
    game->pause = malloc(sizeof(pause_t));
    game->sound = malloc(sizeof(sound_t));
    game->inventory = malloc(sizeof(inventory_t));
    game->setting = malloc(sizeof(setting_t));
    game->music = malloc(sizeof(music_t));
    game->quest = malloc(sizeof(quest_t));
    game->pnj = malloc(sizeof(pnj_t));
    game->stat = malloc(sizeof(stat_t));
}
