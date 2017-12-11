/*
** my_strcat.c for my_strcat.c in /home/bouhastine/c/jour04/bouhas_m/my_strcat
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 20:18:31 2017 BOUHASTINE Mohamed
** Last update Thu Oct 19 20:18:41 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
char	 *my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
    
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
