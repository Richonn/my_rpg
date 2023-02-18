/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** map
*/

#include "rpg.h"

void load_game_asset(game_t *game)
{
    game->main_game->map_spr = create_spr("assets/compressed_map.jpg");
    game->main_game->cloud_spr = create_spr("assets/cloud.png");
    game->main_game->cloud_txt =
    sfTexture_createFromFile("assets/cloud.png", NULL);
    game->main_game->v_map = create_vec(-700, -1220);
    sfSprite_setTexture(game->main_game->cloud_spr, game->main_game->cloud_txt,
    sfTrue);
    sfSprite_setPosition(game->main_game->map_spr, game->main_game->v_map);
    create_wizard(game);
    create_bucheron(game);
    create_axe(game);
}

void display_map(game_t *game)
{
    sfIntRect cld = sfSprite_getTextureRect(game->main_game->cloud_spr);
    cld.left += 4;
    sfTexture_setRepeated(game->main_game->cloud_txt, sfTrue);
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    sfSprite_setTextureRect(game->main_game->cloud_spr, cld);
    sfRenderWindow_drawSprite(game->window, game->main_game->map_spr, NULL);
    anime_wizard(game);
    anime_bucheron(game);
    anime_axe(game);
    sfRenderWindow_drawSprite(game->window, game->main_game->cloud_spr, NULL);
}
