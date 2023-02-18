/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** button_setting
*/

#include <SFML/Graphics.h>
#include "rpg.h"

void quit_but_setting(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 50 && mouse.x <= 190 && mouse.y >= 45 && mouse.y <= 195 &&
    sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        clic_sound(game);
        game->setting->setting = 0;
    }
}

void button_setting(game_t *game, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);

    quit_but_setting(game, mouse);
}
