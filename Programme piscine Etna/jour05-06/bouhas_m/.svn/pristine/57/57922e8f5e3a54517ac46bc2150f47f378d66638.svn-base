/*
** my_put_nbr3.c for my_put_nbr.c in /home/bouhastine/c/jour05-06/bouhas_m/my_put_nbr
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Fri Oct 20 16:58:23 2017 BOUHASTINE Mohamed
** Last update Fri Oct 20 16:58:57 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
char	 my_nb_len(int n)
{
  int	 compt;

  compt = 1;
  while (n > 10)
    {
      n = n / 10;
      compt = compt + 1;
    }
  return (compt);
}

int	 my_power(int n, int nb)
{
  int	i;
  int	tempo;

  tempo = 1;
  i = 0;
  while (i < nb)
    {
      tempo = n * tempo;
      i = i + 1;
    }
  n = tempo;
  return (n);
}

void	 my_put_nbr(int n)
{
  int	 i;
  int	 j;
  int	 reste;
  int	 calcul;

  i = 0;
  if (n < 0)
    {
      n = n * (-1);
      my_putchar('-');
    }
  j = my_nb_len(n) - 1;
  while (j >  0)
    {
      reste = n % (my_power(10, j));
      calcul = (n - reste) / (my_power(10,j));
      my_putchar(calcul + 48);
      n = reste;
      j--;
    }
  my_putchar(n + 48);
}
