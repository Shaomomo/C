/*
** my_sum_params.c for my_sum_params.c in /home/bouhastine/c/jour07/bouhas_m/my_sum_params
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Mon Oct 23 23:19:33 2017 BOUHASTINE Mohamed
** Last update Mon Oct 23 23:19:49 2017 BOUHASTINE Mohamed
*/

#include <stdlib.h>

void	 my_putchar(char c);
char	 *my_strcat(char *dest, char *src)
{
  int	 i;
  int	 j;

  i = 0;
  j = 0;
  while(dest[j] != '\0')
    {
      j = j + 1;
    }
  while(src[i] != '\0')
    {
      dest[j + i] = src[i];
      i = i + 1;
    }
  return (dest);
}

int	 my_strlen( char *str)
{
  int	 i;
  int	 compt;

  i = 0;
  compt = 1;
  while (str[i] != '\0')
    {
      str[i] = i + 1;
      compt = compt + 1;
    }
  return (compt);
}

char	 *my_sum_params(int argc, char **argv)
{
  int	 i;
  char	 *tab;

  i = 0;
  tab = malloc(sizeof(argv));
  while(i < argc)
    {
      my_strcat(tab, argv[i]);
      my_strcat(tab, "\n");
      i++;
    }
  return (tab);
}
