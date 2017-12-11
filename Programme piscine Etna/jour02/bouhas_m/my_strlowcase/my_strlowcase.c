/*
** my_strlowcase.c for my_strlowcase.c in /home/bouhastine/c/jour02/bouhas_m/my_strlowcase
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Tue Oct 17 19:49:01 2017 BOUHASTINE Mohamed
** Last update Tue Oct 17 20:50:07 2017 BOUHASTINE Mohamed
*/

char	 *my_strlowcase(char str[])
{
  int	 i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return (str);
}
