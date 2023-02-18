/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** button
*/

#include <SFML/Graphics.h>
#include "rpg.h"

void quit_button_start(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 737 && mouse.x <= 1092 && mouse.y >= 740 && mouse.y <= 845
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    && game->htp->how_to_play != 1
    && game->setting->setting != 1)
        sfRenderWindow_close(game->window);
}

void play_button_start(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 683 && mouse.x <= 1138 && mouse.y >= 540 &&
    mouse.y <= 690 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue
    && game->htp->how_to_play != 1
    && game->setting->setting != 1) {
        clic_sound(game);
        game->main_game->letter_stage = 1;
        game->start->start_game = 0;
    }
}

void htp_button_start(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 1650 && mouse.x <= 1795 && mouse.y >= 850 && mouse.y
    <= 1000 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        clic_sound(game);
        game->htp->how_to_play = 1;
    }
    if (mouse.x >= 860 && mouse.x <= 1050 && mouse.y >= 830 && mouse.y
    <= 950 && game->htp->how_to_play == 1 &&
    sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        clic_sound(game);
        game->htp->how_to_play = 0;
    }
}

void setting_button_start(game_t *game, sfVector2i mouse)
{
    if (mouse.x >= 1640 && mouse.x <= 1785 && mouse.y >= 675 && mouse.y <= 825
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        clic_sound(game);
        game->setting->setting = 1;
    }
}

void button_start(game_t *game, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);

    quit_button_start(game, mouse);
    play_button_start(game, mouse);
    htp_button_start(game, mouse);
    setting_button_start(game, mouse);
}
