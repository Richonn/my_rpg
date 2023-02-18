/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** stage
*/

#include "rpg.h"

void main_game(game_t *game, sfEvent event)
{
    play_menu_music(game);
    event_move(game, event);
    display_map(game);
    display_player(game);
    ig_stage(game, event);
}

void stage(game_t *game, sfEvent event)
{
    sfRenderWindow_clear(game->window, sfBlack);
    if (game->start->start_game == 1) {
        menu_start(game);
        button_start(game, event);
    }
    if (game->htp->how_to_play == 1)
        htp_menu(game);
    if (game->setting->setting == 1) {
        setting_menu(game);
        button_setting(game, event);
    }
    if (game->main_game->letter_stage == 1) {
        display_letter(game);
        skip_letter(game, event);
    }
    if (game->main_game->stage_main_game == 1)
        main_game(game, event);
    sfRenderWindow_display(game->window);
}
