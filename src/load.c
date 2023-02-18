/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** load
*/

#include "rpg.h"

void load_all_asset(game_t *game)
{
    load_start_asset(game);
    load_game_asset(game);
    load_sound_button(game);
    load_pause_asset(game);
    load_inventory_asset(game);
    load_setting_asset(game);
    load_player_asset(game);
    load_music(game);
    load_letter_asset(game);
    load_dialogue_asset(game);
    load_mini_map(game);
    load_stat_asset(game);
}
