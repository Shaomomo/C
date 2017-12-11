/*
** my_aff_up_params.c for my_aff_up_params.c in /home/bouhastine/c/jour07/bouhas_m/my_aff_up_params
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Mon Oct 23 18:23:08 2017 BOUHASTINE Mohamed
** Last update Mon Oct 23 18:23:13 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
void	 my_aff_up_params(char **arg, int nbr)
{
  int	 i;
  int	 j;

  i = 0;
  j = 0;
  while (i < nbr)
    {
      while (arg[i][j] != '\0')
	{
	  if (arg[i][j] >= 'a' && arg[i][j] <= 'z')
	    {
	      arg[i][j] = arg[i][j] - 32;
	    }
	  my_putchar(arg[i][j]);
	  j++;
	}
      my_putchar('\n');
      i++;
      j = 0;
    }
}
