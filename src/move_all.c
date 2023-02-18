/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** move_all
*/

#include "rpg.h"

void move_all_left(game_t *game, sfEvent event)
{
    sfSprite_move(game->main_game->map_spr, (sfVector2f){5, 0});
    sfSprite_move(game->main_game->cloud_spr, (sfVector2f){5, 0});
    sfSprite_move(game->pnj->wizard_spr, (sfVector2f){5, 0});
    sfSprite_move(game->pnj->bucheron_spr, (sfVector2f){5, 0});
    if (game->quest->axe == 0)
        sfSprite_move(game->pnj->axe_spr, (sfVector2f){5, 0});
}

void move_all_right(game_t *game, sfEvent event)
{
    sfSprite_move(game->main_game->map_spr, (sfVector2f){-5, 0});
    sfSprite_move(game->main_game->cloud_spr, (sfVector2f){-5, 0});
    sfSprite_move(game->pnj->wizard_spr, (sfVector2f){-5, 0});
    sfSprite_move(game->pnj->bucheron_spr, (sfVector2f){-5, 0});
    if (game->quest->axe == 0)
        sfSprite_move(game->pnj->axe_spr, (sfVector2f){-5, 0});
}

void move_all_up(game_t *game, sfEvent event)
{
    sfSprite_move(game->main_game->map_spr, (sfVector2f){0, 5});
    sfSprite_move(game->main_game->cloud_spr, (sfVector2f){0, 5});
    sfSprite_move(game->pnj->wizard_spr, (sfVector2f){0, 5});
    sfSprite_move(game->pnj->bucheron_spr, (sfVector2f){0, 5});
    if (game->quest->axe == 0)
        sfSprite_move(game->pnj->axe_spr, (sfVector2f){0, 5});
}

void move_all_down(game_t *game, sfEvent event)
{
    sfSprite_move(game->main_game->map_spr, (sfVector2f){0, -5});
    sfSprite_move(game->main_game->cloud_spr, (sfVector2f){0, -5});
    sfSprite_move(game->pnj->wizard_spr, (sfVector2f){0, -5});
    sfSprite_move(game->pnj->bucheron_spr, (sfVector2f){0, -5});
    if (game->quest->axe == 0)
        sfSprite_move(game->pnj->axe_spr, (sfVector2f){0, -5});
}
