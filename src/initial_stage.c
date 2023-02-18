/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** initial_stage
*/

#include "rpg.h"

void initialise_all(game_t *game)
{
    game->start->start_game = 1;
    game->main_game->letter_stage = 0;
    game->main_game->stage_main_game = 0;
    game->htp->how_to_play = 0;
    game->pause->pause_stage = 0;
    game->inventory->inventory_stage = 0;
    game->setting->setting = 0;
    game->main_game->moving = 0;
    game->main_game->map = 0;
    game->stat->player_level = 1;
    game->main_game->clock = sfClock_create();
    game->main_game->clock_wizard = sfClock_create();
    game->main_game->clock_bucheron = sfClock_create();
    game->main_game->rect = (sfIntRect){0, 0, 78, 99};
    game->pnj->wizard_rect = (sfIntRect){0, 0, 88, 92};
    game->pnj->bucheron_rect = (sfIntRect){0, 0, 88, 92};
    game->pnj->axe_rect = (sfIntRect){0, 0, 56, 45};
    game->quest->axe = 0;
}
