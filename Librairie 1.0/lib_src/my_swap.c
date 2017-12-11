/*
** my_swap.c for my_swap.c in /home/bouhastine/c/jour03/bouhas_m/my_swap
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 03:08:31 2017 BOUHASTINE Mohamed
** Last update Wed Oct 18 03:20:20 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
void	 my_swap(int *a, int *b)
{
  int	 tempo;

  tempo = *a;
  *a = *b;
  *b = tempo;
}
