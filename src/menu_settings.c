/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** menu_settings
*/

#include "rpg.h"

void load_setting_asset(game_t *game)
{
    game->setting->setting_spr = create_spr("assets/settings_menu.png");
    game->setting->quit_button = create_spr("assets/cross_quit.png");
    game->setting->v_cross_but = create_vec(50, 45);
}

void setting_menu(game_t *game)
{
    sfRenderWindow_setMouseCursorVisible(game->window, sfTrue);
    sfRenderWindow_drawSprite(game->window, game->setting->setting_spr, NULL);
    sfSprite_setPosition(game->setting->quit_button,
    game->setting->v_cross_but);
    sfRenderWindow_drawSprite(game->window, game->setting->quit_button, NULL);
}
