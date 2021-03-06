/*
** my_strncpy.c for my_strncpy.c in /home/bouhastine/c/jour04/bouhas_m/my_strncpy
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 19:36:25 2017 BOUHASTINE Mohamed
** Last update Thu Oct 19 19:36:31 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);

char	 *my_strncpy(char *dest, char *src, int n)
{
  int	 i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}
