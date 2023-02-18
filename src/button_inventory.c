/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** button_inventory
*/

#include <SFML/Graphics.h>
#include "rpg.h"

void button_ivt(game_t *game, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);

    if (mouse.x >= 855 && mouse.x <= 1050 && mouse.y >= 855 && mouse.y <= 1040
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        game->inventory->inventory_stage = 0;
        clic_sound(game);
    }
    if (mouse.x >= 150 && mouse.x <= 285 && mouse.y >= 780 && mouse.y <= 890 &&
    sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        gold_sound(game);
    if (mouse.x >= 150 && mouse.x <= 300 && mouse.y >= 150 && mouse.y <= 290 &&
    sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        clic_sound(game);
        game->inventory->inventory_stage = 0;
        game->stat->stat = 1;
    }
    if (game->stat->stat == 1)
        button_stat(game, event);
}
