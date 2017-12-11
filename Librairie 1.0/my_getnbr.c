#include <unistd.h>
void my_putchar(char c)
{
  write(1, &c, 1);
}
char my_nb_len(int n)
{
  int compt;

  compt = 1;
  while (n > 10)
    {
      n = n / 10;
      compt = compt + 1;
    }
  return (compt);
}

int my_power(int n, int nb)
{
  int i;
  int tempo;

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

void my_put_nbr(int n)
{
  int j;
  int reste;
  int calcul;

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
int my_getnbr(char *str)
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

int main(void)
{
  my_put_nbr(my_getnbr("42"));
  my_putchar('\n');
  my_put_nbr(my_getnbr("666def123"));
  my_putchar('\n');
  my_put_nbr(my_getnbr("-35kjb45"));
  my_putchar('\n');
  my_put_nbr(my_getnbr("hgvj85khb"));
  my_putchar('\n');
  my_put_nbr(my_getnbr("+-+4trois"));
  my_putchar('\n');
  my_put_nbr(my_getnbr("--1"));
  my_putchar('\n');
  return (0);
}
