/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** letter
*/

#include "rpg.h"

void load_letter_asset(game_t *game)
{
    game->main_game->letter_spr = create_spr("assets/king_letter.png");
    game->main_game->v_letter = create_vec(676.5, 125);
    game->main_game->v_text = create_vec(750, 100);
}

void display_letter(game_t *game)
{
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    sfSprite_setPosition(game->main_game->letter_spr,
    game->main_game->v_letter);
    sfRenderWindow_drawSprite(game->window, game->main_game->letter_spr, NULL);
    create_text(game, "Press space to skip :)", 40);
    sfText_setPosition(game->main_game->press_text, game->main_game->v_text);
    sfRenderWindow_drawText(game->window, game->main_game->press_text, NULL);
}

void skip_letter(game_t *game, sfEvent event)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        game->main_game->letter_stage = 2;
        game->main_game->stage_main_game = 1;
    }
}
