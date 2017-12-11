/*
** my_strcpy.c for my_strcpy.c in /home/bouhastine/c/jour04/bouhas_m/my_strcpy
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 19:33:14 2017 BOUHASTINE Mohamed
** Last update Thu Oct 19 19:33:39 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
char	 *my_strcpy(char *dest, char *src)
{
  int	 i;
  
  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
