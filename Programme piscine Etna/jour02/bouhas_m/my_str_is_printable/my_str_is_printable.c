/*
** my_str_is_printable.c for my_str_is_printable.c in /home/bouhastine/c/jour02/bouhas_m/my_str_is_printable
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Tue Oct 17 19:40:02 2017 BOUHASTINE Mohamed
** Last update Tue Oct 17 23:43:59 2017 BOUHASTINE Mohamed
*/

void my_putchar(char c);
int	 my_str_is_printable(char str[])
{
  int	 i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] == 127)
	{
	  return (0);
	}
      else if (str[i] >= 32 && str[i] < 127)
	{
	  return (1);
	}
      else
	{
	  i = i + 1;
	}
    }
}
