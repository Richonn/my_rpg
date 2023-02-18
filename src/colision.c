/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** colision
*/

#include "rpg.h"

int check_hitbox(game_t *game)
{
    float x = sfSprite_getPosition(game->main_game->map_spr).x;
    float y = sfSprite_getPosition(game->main_game->map_spr).y;

    if (x < -1240 && x > -2290 && y > -1340) {
        if (x == -1250)
            return 2;
        if (y == -1330)
            return 1;
        if (x == -2280)
            return 4;
    }
    if (y > -700 && x > -4500)
        return 1;
    if (y == -200)
        return 1;
    if (x < -7270 && x > -7910 && y == -2290)
        return 1;
    if (x < -6670 && x > -7160 && y == -2290)
        return 1;
    if (x < -7780 && x > -7925 && y == -2610)
        return 1;
    if (x < -10350 && x > -11025 && y == -2460)
        return 1;
    if (x < -9580 && x > -10260 && y == -2470)
        return 1;
    if (x < -12140 && x > -12900 && y == -660)
        return 1;
    if (x < -10350 && x > -12110 && y == -1020)
        return 1;
    if (x < -9540 && x > -11110 && y == -520)
        return 1;
    if (x < -8740 && x > -10280 && y == -1350)
        return 1;
    if (x > -8740 && x < -6030 && y == -690)
        return 1;
    if (x < -600 && x > -1250 && y == -1170)
        return 1;
    if (x < -490 && x > -1250 && y == -860)
        return 1;
    if (x < -610 && x > -1140 && y == -1500)
        return 1;
    if (x < -2390 && x > -4780 && y == -1350)
        return 1;
    if (x < -3380 && x > -4880 && y == -1990)
        return 1;
    if (x < -10200 && x > -10420 && y == -3110)
        return 1;
    if (x < -1180 && x > -1780 && y == -1350)
        return 1;
    if (x < -4990 && x > -6020 && y == -1330)
        return 1;
    if (y > -1620 && y < -1450 && x == -1240)
        return 2;
    if (y > -2150 && y < -1490 && x == -5000)
        return 2;
    if (y > -1460 && y < -820 && x == -6150)
        return 2;
    if (y < -810 && y > -2290 && x == -7250)
        return 2;
    if (y > -2760 && y < -2290 && x == -7920)
        return 2;
    if (y < -2450 && y > -2610 && x == -7780)
        return 2;
    if (y < -1140 && y > -2450 && x == -10350)
        return 2;
    if (y < -2460 && y > -3900 && x == -11020)
        return 2;
    if (y > -1450 && y < -660 && x == -12900)
        return 2;
    if (y > -1020 && y < -520 && x == -10350)
        return 2;
    if (y > -1350 && y < -690 && x == -8750)
        return 2;
    if (y > -1170 && y < -970 && x == -600)
        return 2;
    if (x == -2380 && y > -1340)
        return 2;
    if (x == -3370 && y > -1980)
        return 2;
    if (x == -5310 && y > -640)
        return 2;
    if (x == -4990 && y < -620 && y > -1330)
        return 2;
    if (x == -590 && y < -1280 && y > -1500)
        return 2;
    if (x == -10200 && y > -3110 && y < -2770)
        return 2;
    if (x == -1040 && y > -1290 && y < -860)
        return 2;
    if (x > -1250 && y == -1620)
        return 3;
    if (y == -3900)
        return 3;
    if (x < -1240 && x > -3250 && y == -1450)
        return 3;
    if (x < -3260 && x > -4990 && y == -2100)
        return 3;
    if (x < -5010 && x > -6130 && y == -1460)
        return 3;
    if (x < -6150 && x > -7140 && y == -820)
        return 3;
    if (x < -6670 && x > -7930 && y == -2760)
        return 3;
    if (x < -7780 && x > -7920 && y == -2430)
        return 3;
    if (x < -7290 && x > -8620 && y == -810)
        return 3;
    if (y < -830 && y > -1460 && x == -8620)
        return 4;
    if (x < -8640 && x > -10270 && y == -1430)
        return 3;
    if (x < -10370 && x > -12130 && y == -1100)
        return 3;
    if (x < -12130 && x > -12900 && y == -1450)
        return 3;
    if (x < -600 && x > -1250 && y == -960)
        return 3;
    if (x < -4300 && x > -4880 && y == -620)
        return 3;
    if (x < -4990 && x > -5380 && y == -620)
        return 3;
    if (x > -1080 && x < -590 && y == -1290)
        return 3;
    if (x < -10200 && x > -10430 && y == -2770)
        return 3;
    if (x > -170)
        return 4;
    if (y > -2100 && y < -1480 && x == -3260)
        return 4;
    if (y < -820 && y > -2300 && x == -7180)
        return 4;
    if (y > -2760 && y < -2290 && x == -6670)
        return 4;
    if (y < -2470 && y > -3900 && x == -9600)
        return 4;
    if (y < -1140 && y > -1450 && x == -12130)
        return 4;
    if (y < -660 && y > -980 && x == -12140)
        return 4;
    if (y > -1340 && y < -520 && x == -10280)
        return 4;
    if (y < -870 && y > -1620 && x == -490)
        return 4;
    if (y > -1500 && y < -1340 && x == -1130)
        return 4;
    if (x == -4880 && y > -1990 && y < -630)
        return 4;
    if (x == -4570 && y > -630)
        return 4;
    if (x == -6020 && y > -1330)
        return 4;
    if (x == -10420 && y > -3110 && y < -2770)
        return 4;
    if (x == -10280 && y > -2445 && y < -1430)
        return 4;
    return 0;
}
