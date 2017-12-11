/*
** main.c for main.c in /home/bouhastine/c/jour07/bouhas_m/my_aff_up_params
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Mon Oct 23 18:25:05 2017 BOUHASTINE Mohamed
** Last update Mon Oct 23 18:25:13 2017 BOUHASTINE Mohamed
*/

char	 my_aff_up_params(char **str, int n);
void	 my_putchar(char c);
int	 main(int argc, char **argv)
{
  my_aff_up_params(argv, argc);
  my_putchar('\n');
  return (0);
}
