
/*
** my_strdup.c for my_strdup.c in /home/bouhastine/c/jour07/bouhas_m/my_strdup
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Mon Oct 23 23:23:30 2017 BOUHASTINE Mohamed
** Last update Mon Oct 23 23:24:53 2017 BOUHASTINE Mohamed
*/

#include <stdlib.h>

void	my_putchar(char c);
int	 my_strlen(char *str)
{
  int	 i;

  i = 0;
  while (*str != '\0')
    {
      str = str + 1;
      i++;
    }
  return (i);
}

char	 *my_strdup(char *str)
{
  int	 i;
  int	 j;
  char	 *chaine;
  
  i = 0;
  j = 0;
  if (!(chaine =  malloc(sizeof(char) * my_strlen(str) + 1)))
    {
      return (0);
    }
  while (str[i] != '\0')
    {
      j = 0;
      while (str[j] != '\0')
	{
	  chaine[j] = str[j];
	  j++;
	}
      i++;
    }
  return (chaine);
}
