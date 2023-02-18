/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** game_time
*/

#include "rpg.h"

int get_time(game_t *game)
{
    sfTime time = sfClock_getElapsedTime(game->main_game->clock);
    return (time.microseconds / 50000);
}

int get_time_wizard(game_t *game)
{
    sfTime time = sfClock_getElapsedTime(game->main_game->clock_wizard);
    return (time.microseconds / 50000);
}

int get_time_bucheron(game_t *game)
{
    sfTime time = sfClock_getElapsedTime(game->main_game->clock_bucheron);
    return (time.microseconds / 50000);
}
