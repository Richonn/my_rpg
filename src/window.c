/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** window
*/

#include "rpg.h"

void create_window(game_t *game, int width, int height)
{
    sfVideoMode v_mode = {width, height, 32};
    game->window = sfRenderWindow_create(v_mode, "Dork Souls", sfResize |
    sfClose, NULL);
}
