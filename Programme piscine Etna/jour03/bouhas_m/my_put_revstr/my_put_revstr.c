/*
** my_put_revstr.c for my_put_revstr.c in /home/bouhastine/c/jour03/bouhas_m/my_put_revstr
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 03:34:43 2017 BOUHASTINE Mohamed
** Last update Wed Oct 18 07:10:21 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
void	 my_put_revstr(char *str)
{
  int	 compt1;
  int	 compt2;

  compt1 = 0;
  compt2 = 0;
  while (compt2 == 0)
    {
      if (*str == '\0')
	{
	  while (compt1 >=0)
	    {
	      my_putchar(*str);
	      str = str - 1;
	      compt1 = compt1 -1;
	    }
	  compt2 = compt2 + 1;
	}
      compt1 = compt1 + 1;;
      str = str + 1;
    }
}
