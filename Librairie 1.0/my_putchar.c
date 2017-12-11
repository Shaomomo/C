/*
** my_putchar.c for my_putchar.c in /home/bouhastine/bouhas_m/c/my_putchar
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Mon Oct 16 12:55:41 2017 BOUHASTINE Mohamed
** Last update Mon Oct 16 12:55:58 2017 BOUHASTINE Mohamed
*/

#include  <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
