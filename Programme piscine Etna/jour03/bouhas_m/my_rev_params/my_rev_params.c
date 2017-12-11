/*
** my_rev_params.c for my_rev_params.c in /home/bouhastine/c/jour03/bouhas_m/my_rev_params
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 07:54:46 2017 BOUHASTINE Mohamed
** Last update Wed Oct 18 08:51:58 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
void	 my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
void	 my_rev_params(int nbr, char **arg)
{
  int	 i;

  nbr = nbr - 1;
  i = nbr;
  while (i >= 0)
    {
      my_putstr(arg[i]);
      my_putchar('\n');
      i--;
    }
}
