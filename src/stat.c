/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** stat
*/

#include "rpg.h"

void load_stat_asset(game_t *game)
{
    game->stat->stat_menu_spr = create_spr("assets/stat_menu.png");
    game->stat->up_btn_spr = create_spr("assets/stat_btn.png");
    game->stat->quit_spr = create_spr("assets/cross_quit.png");
    game->stat->v_up_btn = create_vec(350, 750);
    game->stat->v_quit_btn = create_vec(1600, 150);
    game->stat->v_level = create_vec(1000, 800);
}

void stat_menu(game_t *game)
{
    sfRenderWindow_setMouseCursorVisible(game->window, sfTrue);
    sfRenderWindow_drawSprite(game->window, game->stat->stat_menu_spr, NULL);
    sfSprite_setPosition(game->stat->up_btn_spr, game->stat->v_up_btn);
    sfRenderWindow_drawSprite(game->window, game->stat->up_btn_spr, NULL);
    sfSprite_setPosition(game->stat->quit_spr, game->stat->v_quit_btn);
    sfRenderWindow_drawSprite(game->window, game->stat->quit_spr, NULL);
}
