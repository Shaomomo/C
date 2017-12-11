/*
** my_getnbr.c for my_getnbr.c in /home/bouhastine/c/libmy_01
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Tue Oct 24 02:40:37 2017 BOUHASTINE Mohamed
** Last update Tue Oct 24 05:32:02 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
int	 my_getnbr(char *str)
{
  int    i;
  int    neg;
  int    n;

  neg = 1;
  i = 0;
  while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
    {
      if (str[i] == '-')
	{
	  neg = neg * -1;
	}
      i++;
    }
  n = 0;
  while (str[i] >= 48 && str[i] <= 57)
    {
      n = (n * 10) + str[i] - 48;
      i++;
    }
  return (n * neg);
}
