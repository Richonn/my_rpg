/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** player
*/

#include "rpg.h"

void create_wizard(game_t *game)
{
    game->pnj->wizard_spr = create_spr("assets/wizard.png");
    game->pnj->wizard_txt =
    sfTexture_createFromFile("assets/wizard.png", NULL);
    game->pnj->wizard_v = create_vec(10530, 2420);
    sfSprite_setTexture(game->pnj->wizard_spr, game->pnj->wizard_txt,
    sfTrue);
    sfSprite_setPosition(game->pnj->wizard_spr, game->pnj->wizard_v);
}

void anime_wizard(game_t *game)
{
    if (get_time_wizard(game) > 2) {
        if (game->pnj->wizard_rect.left == 176)
            game->pnj->wizard_rect.left = -88;
        game->pnj->wizard_rect.left += 88;
        sfClock_restart(game->main_game->clock_wizard);
    }
    sfSprite_setTextureRect(game->pnj->wizard_spr, game->pnj->wizard_rect);
    sfRenderWindow_drawSprite(game->window, game->pnj->wizard_spr, NULL);
}
