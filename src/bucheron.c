/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** player
*/

#include <SFML/Graphics.h>
#include "rpg.h"

void create_bucheron(game_t *game)
{
    game->pnj->bucheron_spr = create_spr("assets/bucheron.png");
    game->pnj->bucheron_txt =
    sfTexture_createFromFile("assets/bucheron.png", NULL);
    game->pnj->bucheron_v = create_vec(650, 670);
    sfSprite_setTexture(game->pnj->bucheron_spr, game->pnj->bucheron_txt,
    sfTrue);
    sfSprite_setPosition(game->pnj->bucheron_spr, game->pnj->bucheron_v);
}

void anime_bucheron(game_t *game)
{
    if (get_time_bucheron(game) > 2) {
        if (game->pnj->bucheron_rect.left == 176)
            game->pnj->bucheron_rect.left = -88;
        game->pnj->bucheron_rect.left += 88;
        sfClock_restart(game->main_game->clock_bucheron);
    }
    sfSprite_setTextureRect(game->pnj->bucheron_spr, game->pnj->bucheron_rect);
    sfRenderWindow_drawSprite(game->window, game->pnj->bucheron_spr, NULL);
}
