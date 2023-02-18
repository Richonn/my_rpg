/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** my_putchar
*/

#include <unistd.h>
#include "rpg.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
