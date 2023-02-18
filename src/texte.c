/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** texte
*/

#include "rpg.h"

sfText *create_text(game_t *game, char *txt, int size)
{
    if (!txt)
        return NULL;
    game->main_game->press_text = sfText_create();
    sfText_setString(game->main_game->press_text, txt);
    sfText_setFont(game->main_game->press_text,
    sfFont_createFromFile("assets/bodoni72.otf"));
    sfText_setColor(game->main_game->press_text, sfWhite);
    sfText_setCharacterSize(game->main_game->press_text, size);
    return 0;
}
