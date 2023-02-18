/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** sprite
*/

#include "rpg.h"

sfSprite *create_spr(char *filename)
{
    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();
    texture = sfTexture_createFromFile(filename, NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}
