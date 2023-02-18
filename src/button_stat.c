/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** button_stat
*/

#include "rpg.h"

void button_stat(game_t *game, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);

    if (mouse.x >= 1600 && mouse.x <= 1740 && mouse.y >= 150 && mouse.y <= 300
    && (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)) {
        game->stat->stat = 0;
        game->inventory->inventory_stage = 1;
        clic_sound(game);
    }
    if (mouse.x >= 350 && mouse.x <= 500 && mouse.y >= 750 && mouse.y <= 900 &&
    sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        game->stat->player_level += 1;
        clic_sound(game);
    }
}
