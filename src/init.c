/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** init
*/

#include "rpg.h"

void initialisation(game_t *game)
{
    malloc_all(game);
    initialise_all(game);
    create_window(game, 1920, 1080);
    load_all_asset(game);
    play_menu_music(game);
}
