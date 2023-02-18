/*
** EPITECH PROJECT, 2022
** pause_menu.c
** File description:
** pause_menu
*/

#include "rpg.h"

void load_pause_asset(game_t *game)
{
    game->pause->pause_menu_spr = create_spr("assets/pause_menu.jpg");
    game->pause->resume_button_spr = create_spr("assets/resume_button.png");
    game->pause->v_resume_btn = create_vec(350, 350);
    game->pause->main_menu_spr = create_spr("assets/main_menu_btn.png");
    game->pause->v_main_menu = create_vec(1000, 350);
    game->pause->setting_spr = create_spr("assets/settings_button.png");
    game->pause->v_setting_btn = create_vec(350, 600);
    game->pause->quit_btn_spr = create_spr("assets/quit_pause_btn.png");
    game->pause->v_quit_btn = create_vec(1000, 600);
}

void pause_menu(game_t *game)
{
    sfRenderWindow_setMouseCursorVisible(game->window, sfTrue);
    sfRenderWindow_drawSprite(game->window, game->pause->pause_menu_spr, NULL);
    sfSprite_setPosition(game->pause->resume_button_spr,
    game->pause->v_resume_btn);
    sfRenderWindow_drawSprite(game->window,
    game->pause->resume_button_spr, NULL);
    sfSprite_setPosition(game->pause->setting_spr, game->pause->v_setting_btn);
    sfRenderWindow_drawSprite(game->window, game->pause->setting_spr, NULL);
    sfSprite_setPosition(game->pause->main_menu_spr, game->pause->v_main_menu);
    sfRenderWindow_drawSprite(game->window, game->pause->main_menu_spr, NULL);
    sfSprite_setPosition(game->pause->quit_btn_spr, game->pause->v_quit_btn);
    sfRenderWindow_drawSprite(game->window, game->pause->quit_btn_spr, NULL);
}
