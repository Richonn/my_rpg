/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** button_pause_menu
*/

#include <SFML/Graphics.h>
#include "rpg.h"

void resume_button_pause(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 350 && mouse.x <= 835 && mouse.y >= 350 && mouse.y <= 495 &&
    sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    && game->setting->setting != 1) {
        game->pause->pause_stage = 0;
        clic_sound(game);
    }
}

void main_menu_pause(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 1000 && mouse.x <= 1485 && mouse.y >= 350 && mouse.y <= 495
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    && game->setting->setting != 1) {
        game->pause->pause_stage = 0;
        game->main_game->stage_main_game = 0;
        game->start->start_game = 1;
        clic_sound(game);
    }
}

void settings_pause(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 350 && mouse.x <= 835 && mouse.y >= 600 && mouse.y <= 745 &&
    sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        clic_sound(game);
        game->setting->setting = 1;
    }
}

void quit_pause_button(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 1000 && mouse.x <= 1485 && mouse.y >= 600 && mouse.y <= 745
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    && game->setting->setting != 1) {
        game->pause->pause_stage = 0;
        game->main_game->stage_main_game = 0;
        sfRenderWindow_close(game->window);
    }
}

void button_pause(game_t *game, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);

    resume_button_pause(game, mouse);
    main_menu_pause(game, mouse);
    settings_pause(game, mouse);
    quit_pause_button(game, mouse);
}
