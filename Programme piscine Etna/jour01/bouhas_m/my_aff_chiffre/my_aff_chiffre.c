/*
** my_aff_chiffre.c for my_aff_chiffre.c in /home/bouhastine/bouhas_m/c
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Mon Oct 16 19:43:46 2017 BOUHASTINE Mohamed
** Last update Mon Oct 16 19:51:26 2017 BOUHASTINE Mohamed
*/
#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_aff_chiffre(void)
{
  int c = 48;
  while ( c <= 57)
    {
      my_putchar(c);
      c = c + 1;
    }
}

int main(void)
{
  my_aff_chiffre();;
}
