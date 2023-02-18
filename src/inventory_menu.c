/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** inventory
*/

#include "rpg.h"

void load_inventory_asset(game_t *game)
{
    game->inventory->inventory_spr = create_spr("assets/inventory.png");
    game->inventory->stat_btn_spr = create_spr("assets/stat_btn.png");
    game->inventory->v_stat_btn = create_vec(150, 150);
}

void inventory_menu(game_t *game)
{
    sfRenderWindow_setMouseCursorVisible(game->window, sfTrue);
    sfRenderWindow_drawSprite(game->window, game->inventory->inventory_spr,
    NULL);
    sfSprite_setPosition(game->inventory->stat_btn_spr,
    game->inventory->v_stat_btn);
    sfRenderWindow_drawSprite(game->window, game->inventory->stat_btn_spr,
    NULL);
    if (game->quest->axe == 1) {
        game->pnj->axe_v = create_vec(322, 420);
        sfSprite_setPosition(game->pnj->axe_spr, game->pnj->axe_v);
        sfSprite_setTextureRect(game->pnj->axe_spr, game->pnj->axe_rect);
        sfRenderWindow_drawSprite(game->window, game->pnj->axe_spr, NULL);
    }
}
