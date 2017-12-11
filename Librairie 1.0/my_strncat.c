/*
** my_strncat2.c for my_strncat.c in /home/bouhastine/c/jour04/bouhas_m
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 20:08:30 2017 BOUHASTINE Mohamed
** Last update Thu Oct 19 21:10:27 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
char	 *my_strncat(char *dest, char *src, int n)
{
  int	 i;
  int	 j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (src[j] != '\0' && j < n)
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  return (dest);
}
