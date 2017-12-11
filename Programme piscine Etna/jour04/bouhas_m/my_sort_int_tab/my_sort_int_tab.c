/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/bouhastine/c/jour04/bouhas_m/my_sort_int_tab
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 19:29:24 2017 BOUHASTINE Mohamed
** Last update Thu Oct 19 19:31:18 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
void	 my_sort_int_tab(int *tab, int size)
{
  int	 i;
  int	 j;
  int	 stock;

  i = 0;
  j = 0;
  while (j < size)
    {
      while (i < size)
	{
	  if (tab[i] > tab[j])
	    {
	      stock = tab[i];
	      tab[i] = tab[j];
	      tab[j] = stock;
	    }
	  i = i + 1;
	}
      j = j + 1;
    }
}
