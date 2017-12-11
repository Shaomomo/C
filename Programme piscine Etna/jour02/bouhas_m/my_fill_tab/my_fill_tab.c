/*
** my_fill_tab.c for my_fill_tab.c in /home/bouhastine/c/jour02/bouhas_m/my_fill_tab
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Tue Oct 17 19:36:15 2017 BOUHASTINE Mohamed
** Last update Tue Oct 17 23:42:07 2017 BOUHASTINE Mohamed
*/

void my_putchar(char c);
int *my_fill_tab()
{
  int		 i;
  static int	 tab[100];

  i = 1;
  while (i <= 100)
      {
	tab[i] = i;
	i = i + 1;
      }
    return (tab[i]);
}
