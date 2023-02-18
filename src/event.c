/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** event
*/

#include "rpg.h"

int type_event(sfRenderWindow *window, game_t *game)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
    }
    return 0;
}
