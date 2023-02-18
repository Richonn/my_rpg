/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** htp_menu
*/

#include "rpg.h"

void htp_menu(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->htp->htp_menu_spr, NULL);
}
