/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** player
*/

#include "rpg.h"

void load_player_asset(game_t *game)
{
    game->main_game->player = create_spr("assets/amogus.png");
    game->main_game->v_player = create_vec(921, 490);
}

void display_player(game_t *game)
{
    if (get_time(game) > 2 && game->main_game->moving == 1) {
        if (game->main_game->rect.left == 156)
            game->main_game->rect.left = -78;
        game->main_game->rect.left += 78;
        sfClock_restart(game->main_game->clock);
    }
    sfSprite_setPosition(game->main_game->player, game->main_game->v_player);
    sfSprite_setTextureRect(game->main_game->player, game->main_game->rect);
    sfRenderWindow_drawSprite(game->window, game->main_game->player, NULL);
}
