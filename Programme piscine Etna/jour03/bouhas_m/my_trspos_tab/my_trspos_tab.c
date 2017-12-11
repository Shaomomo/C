/*
** my_trspos_tab.c for my_trspos_tab.c in /home/bouhastine/c/jour03/bouhas_m/my_trspos_tab
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 04:50:34 2017 BOUHASTINE Mohamed
** Last update Wed Oct 18 09:56:09 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
void	 my_trspos_tab(int c, int l, char **tab)
{
  int	 compt1;
  int	 compt2;

  compt1 = 0;
  compt2 = 0;
  while(compt1 < c)
  {
    while (compt2 < l)
    {
      my_putchar(tab[compt2][compt1]);
      compt2 = compt2 + 1;
    }
    my_putchar('\n');
    compt1 = compt1 + 1;
    compt2 = 0;
  }
}
