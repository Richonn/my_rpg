/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** player
*/

#include <stddef.h>
#include <SFML/Graphics.h>
#include "rpg.h"

void create_axe(game_t *game)
{
    game->pnj->axe_spr = create_spr("assets/axe.png");
    game->pnj->axe_txt =
    sfTexture_createFromFile("assets/axe.png", NULL);
    game->pnj->axe_v = create_vec(8100, 1980);
    sfSprite_setTexture(game->pnj->axe_spr, game->pnj->axe_txt,
    sfTrue);
    sfSprite_setPosition(game->pnj->axe_spr, game->pnj->axe_v);
}

void anime_axe(game_t *game)
{
    if (game->quest->axe == 0) {
        sfSprite_setTextureRect(game->pnj->axe_spr, game->pnj->axe_rect);
        sfRenderWindow_drawSprite(game->window, game->pnj->axe_spr, NULL);
    }
}
