/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** vector
*/

#include "rpg.h"

sfVector2f create_vec(float x, float y)
{
    sfVector2f position;
    position.x = x;
    position.y = y;
    return position;
}
