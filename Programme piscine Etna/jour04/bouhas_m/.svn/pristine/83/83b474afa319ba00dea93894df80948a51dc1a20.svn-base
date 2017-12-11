/*
** my_strcmp.c for my_strcmp.c in /home/bouhastine/c/jour04/bouhas_m/my_strcmp
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 19:32:41 2017 BOUHASTINE Mohamed
** Last update Thu Oct 19 21:07:51 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
int	 my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
      if (s1[i] < s2[i])
	{
	  return (-1);
	}
      else if (s1[i] > s2[i]) 
	{
	  return (1);
	}
      i = i + 1;
    }
  return (0);
}
