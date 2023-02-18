/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** menu_start
*/

#include "rpg.h"

void load_start_asset(game_t *game)
{
    game->start->sprite_menu = create_spr("assets/start_menu.png");
    game->start->start_button_spr = create_spr("assets/start_button.png");
    game->start->q_button_spr = create_spr("assets/quit_button.png");
    game->start->setting_spr = create_spr("assets/setting_btn.png");
    game->htp->htp_button_spr = create_spr("assets/htp_button.png");
    game->htp->htp_menu_spr = create_spr("assets/htp_menu.png");
    game->start->v_start_button = create_vec(683, 540);
    game->start->v_q_button = create_vec(737, 740);
    game->start->v_setting = create_vec(1640, 675);
    game->htp->v_htp_button = create_vec(1650, 850);
}

void menu_start(game_t *game)
{
    play_game_music(game);
    sfRenderWindow_setMouseCursorVisible(game->window, sfTrue);
    sfSprite_setPosition(game->start->start_button_spr,
    game->start->v_start_button);
    sfSprite_setPosition(game->start->q_button_spr, game->start->v_q_button);
    sfSprite_setPosition(game->htp->htp_button_spr,
    game->htp->v_htp_button);
    sfRenderWindow_drawSprite(game->window, game->start->sprite_menu, NULL);
    sfRenderWindow_drawSprite(game->window,
    game->start->start_button_spr, NULL);
    sfRenderWindow_drawSprite(game->window, game->start->q_button_spr, NULL);
    sfRenderWindow_drawSprite(game->window, game->htp->htp_button_spr, NULL);
    sfSprite_setPosition(game->start->setting_spr, game->start->v_setting);
    sfRenderWindow_drawSprite(game->window, game->start->setting_spr, NULL);
}
