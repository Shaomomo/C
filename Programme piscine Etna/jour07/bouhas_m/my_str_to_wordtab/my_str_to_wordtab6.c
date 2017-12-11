#include <stdlib.h>

intmy_str_to_wordtab_count(char *str)
{
  char *curr;
  int nb;

  curr = get_first_alpha_char(str);
  nb = 1;
  while (curr < str + my_strlen(str))
    {
      ++nb;
      curr = get_first_alpha_char(curr);
      curr = get_first_nonalpha_char(curr + 1);
    }
  return (nb);
}

char**my_str_to_wordtab(char *str)
{
  char **tab_str;
  char *curr;
  int nb;
  int i;

  nb = my_str_to_wordtab_count(str);
  tab_str = malloc(sizeof(*tab_str) * nb);
  tab_str[nb - 1] = 0;
  curr = get_first_alpha_char(str);
  my_put_nbr(nb)
    i = 0;
  while (++i < nb)
    {
      str = get_first_alpha_char(str);
      curr = get_first_nonalpha_char(str + 1);
      tab_str[i - 1] = malloc(sizeof(*(tab_str[i - 1])) * (curr - str + 1));
      tab_str[i - 1][curr - str] = '\0';
      my_strncpy(tab_str[i - 1], str, (curr - str));
      str = curr + 1;
    }
  return (tab_str);
}

int main(void)
{
  char *str="coucou les a!mis efs:fef  ffes";
  printf("%s\n", str);
  return (0);
}
