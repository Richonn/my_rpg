/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** main
*/

#include <stdlib.h>
#include "rpg.h"

int main(int ac, char **av)
{
    sfEvent event;
    game_t *game = malloc(sizeof(game_t));

    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
            help();
            return 0;
        } else
            return 84;
    }
    if (ac == 1) {
        initialisation(game);
        sfRenderWindow_setFramerateLimit(game->window, 60);
        while (sfRenderWindow_isOpen(game->window)) {
            type_event(game->window, game);
            stage(game, event);
        }
        free(game);
    }
}
