/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** ig_button
*/

#include "rpg.h"

void stage_map(game_t *game, sfEvent event)
{
    if ((sfKeyboard_isKeyPressed(sfKeyM) == sfTrue) &&
    game->main_game->map == 0) {
        game->main_game->map = 1;
        mini_map(game);
        map_sound(game);
    }
    if (sfKeyboard_isKeyPressed(sfKeyM) == sfTrue &&
    game->pause->pause_stage != 1 && game->main_game->stage_main_game == 1) {
        game->main_game->map = 0;
        close_map_sound(game);
    }
}

void stage_quest(game_t *game, sfEvent event)
{
    if (sfKeyboard_isKeyPressed(sfKeyF) == sfTrue &&
    sfSprite_getPosition(game->main_game->map_spr).x > -600 &&
    sfSprite_getPosition(game->main_game->map_spr).y > -1445 &&
    sfSprite_getPosition(game->main_game->map_spr).y < -1345 &&
    game->quest->axe != 1)
        game->quest->quest = 1;
    if (sfKeyboard_isKeyPressed(sfKeyF) == sfTrue &&
    sfSprite_getPosition(game->main_game->map_spr).x > -7920 &&
    sfSprite_getPosition(game->main_game->map_spr).y > -2760 &&
    sfSprite_getPosition(game->main_game->map_spr).y < -2610 &&
    sfSprite_getPosition(game->main_game->map_spr).x < -7780 &&
    game->quest->axe != 1)
        game->quest->axe = 1;
    if (sfKeyboard_isKeyPressed(sfKeyF) == sfTrue &&
    sfSprite_getPosition(game->main_game->map_spr).x > -600 &&
    sfSprite_getPosition(game->main_game->map_spr).y > -1445 &&
    sfSprite_getPosition(game->main_game->map_spr).y < -1345 &&
    game->quest->axe == 1)
        game->quest->quest = 3;
}

void ig_key(game_t *game, sfEvent event)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue &&
    game->main_game->stage_main_game == 1) {
        game->pause->pause_stage = 1;
        game->inventory->inventory_stage = 0;
        game->stat->stat = 0;
        clic_sound(game);
    }
    if (sfKeyboard_isKeyPressed(sfKeyTab) == sfTrue &&
    game->pause->pause_stage != 1 && game->main_game->stage_main_game == 1) {
        game->inventory->inventory_stage = 1;
        clic_sound(game);
    }
    stage_quest(game, event);
    stage_map(game, event);
}
