/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** mini_map
*/

#include "rpg.h"

void load_mini_map(game_t *game)
{
    game->main_game->mini_map = create_spr("assets/mini_map.png");
}

void mini_map(game_t *game)
{
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    sfRenderWindow_drawSprite(game->window, game->main_game->mini_map, NULL);
}
