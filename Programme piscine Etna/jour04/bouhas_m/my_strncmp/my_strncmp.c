/*
** my_strncmp.c for my_strncmp.c in /home/bouhastine/c/jour04/bouhas_m/my_strncmp
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 21:06:20 2017 BOUHASTINE Mohamed
** Last update Thu Oct 19 21:06:41 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
int	 my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (((s1[i] != '\0') || (s2[i] != '\0') || (s1[i] == s2[i])) && i < n)
    {
	if (s1[i] > s2[i])
	  {
	    return (1);
	  }
	else if (s1[i] < s2[i])
	  {
	    return (-1);
	  }
    i = i + 1;
    }
  return (0);
}
