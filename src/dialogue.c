/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** dialogue
*/

#include "rpg.h"

void load_dialogue_asset(game_t *game)
{
    game->quest->box_spr = create_spr("assets/dialog.png");
    game->quest->v_name = create_vec(100, 250);
    game->quest->v_dialogue = create_vec(100, 250);
    game->quest->v_box = create_vec(50, 250);
    load_text(game);
}

void load_text(game_t *game)
{
    game->quest->name = sfText_create();
    game->quest->dialogue = sfText_create();
    sfText_setPosition(game->quest->name, (sfVector2f){205, 665});
    sfText_setPosition(game->quest->dialogue, (sfVector2f){170, 750});
    sfText_setFont(game->quest->name,
    sfFont_createFromFile("assets/bodoni72.otf"));
    sfText_setFont(game->quest->dialogue,
    sfFont_createFromFile("assets/bodoni72.otf"));
    sfText_setColor(game->quest->name, sfBlack);
    sfText_setColor(game->quest->dialogue, sfBlack);
    sfText_setCharacterSize(game->quest->name, 30);
    sfText_setCharacterSize(game->quest->dialogue, 20);
}

void display_dialogue(game_t *game, char *str1, char *str2)
{
    sfText_setString(game->quest->name, str1);
    sfText_setString(game->quest->dialogue, str2);
    sfRenderWindow_drawText(game->window, game->quest->name, NULL);
    sfRenderWindow_drawText(game->window, game->quest->dialogue, NULL);
}

void display_dialogue_box(game_t *game)
{
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    sfSprite_setPosition(game->quest->box_spr,
    game->quest->v_box);
    sfRenderWindow_drawSprite(game->window, game->quest->box_spr, NULL);
}

void skip_dialogue(game_t *game, sfEvent event)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        game->quest->quest = 2;
    }
}
