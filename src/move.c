/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** move
*/

#include "rpg.h"

void check_up(game_t *game, sfEvent event, int wall)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        if (wall != 1) {
            game->main_game->moving = 1;
            game->main_game->rect.top = 316;
            move_all_up(game, event);
        }
    }
}

void check_right(game_t *game, sfEvent event, int wall)
{
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        if (wall != 2) {
            game->main_game->moving = 1;
            game->main_game->rect.top = 216;
            move_all_right(game, event);
        }
    }
}

void check_down(game_t *game, sfEvent event, int wall)
{
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        if (wall != 3) {
            game->main_game->moving = 1;
            game->main_game->rect.top = 0;
            move_all_down(game, event);
        }
    }
}

void check_left(game_t *game, sfEvent event, int wall)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        if (wall != 4) {
            game->main_game->moving = 1;
            game->main_game->rect.top = 103;
            move_all_left(game, event);
        }
    }
}

void event_move(game_t *game, sfEvent event)
{
    int wall = check_hitbox(game);

    check_up(game, event, wall);
    check_right(game, event, wall);
    check_down(game, event, wall);
    check_left(game, event, wall);
    if (sfKeyboard_isKeyPressed(sfKeyZ) == sfFalse
    && sfKeyboard_isKeyPressed(sfKeyS) == sfFalse
    && sfKeyboard_isKeyPressed(sfKeyD) == sfFalse
    && sfKeyboard_isKeyPressed(sfKeyQ) == sfFalse) {
        game->main_game->moving = 0;
        game->main_game->rect.top = 0;
        game->main_game->rect.left = 78;
    }
}
