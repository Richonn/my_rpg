/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** ig_stage
*/

#include "rpg.h"

void check_stat(game_t *game, sfEvent event)
{
    if (game->stat->stat == 1) {
        stat_menu(game);
        button_stat(game, event);
    }
}

void check_inventory(game_t *game, sfEvent event)
{
    if (game->inventory->inventory_stage == 1 &&
    game->pause->pause_stage == 0) {
        inventory_menu(game);
        button_ivt(game, event);
    }
}

void check_pause(game_t *game, sfEvent event)
{
    if (game->pause->pause_stage == 1 && game->start->start_game == 0) {
        pause_menu(game);
        button_pause(game, event);
    }
}

void ig_stage(game_t *game, sfEvent event)
{
    ig_key(game, event);
    check_pause(game, event);
    if (game->pause->pause_stage == 1 && game->setting->setting == 1) {
        setting_menu(game);
        button_setting(game, event);
    } if (game->quest->quest == 1) {
        display_dialogue_box(game);
        display_dialogue(game, "Bucheron",
        "Tu peux me trouver ma hache stp?\nJ'ai argent.");
        skip_dialogue(game, event);
    } if (game->quest->quest == 3) {
        display_dialogue_box(game);
        display_dialogue(game, "Bucheron",
        "Merci.\nTu peux la garder en fait, j'en ai une autre.");
        skip_dialogue(game, event);
    } if (game->main_game->map == 1) {
        mini_map(game);
    }
    check_inventory(game, event);
    check_stat(game, event);
}
