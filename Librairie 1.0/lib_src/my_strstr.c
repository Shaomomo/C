/*
** my_strstr.c for my_strstr.c in /home/bouhastine/c/libmy_01
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Tue Oct 24 02:48:36 2017 BOUHASTINE Mohamed
** Last update Tue Oct 24 05:50:11 2017 BOUHASTINE Mohamed
*/

#include <unistd.h>
#include <stdlib.h>
void	 my_putchar(char c)
{
  write(1, &c, 1);
}

char	 *my_strstr(char *str, char *to_find)
{
  int i;
  int c;

  i = 0;
  c = 0;
  if (str[0] == '\0' && to_find[0] == '\0')
    return ("");
  while (str[i] != '\0')
    {
      if (to_find[c] == '\0')
	return (&str[i - c]);
      if (str[i] == to_find[c])
	c++;
      else
	c = (str[i] == to_find[0]) ? 1 : 0;
      i++;
    }
  return ((i == c) ? (i == 0) ? "null\0" : &str[i - c] : "null\0");
}

/*{
  int	 i;
  int	 j;

  i = 0;
  j = 0;
  while( str[i] != '\0')
    {
      while(to_find[j] != '\0')
	{
	  return (str[i] == to_find[j]) ? str : NULL;
	  j++;
	}
      i++;
	       //return (str);
    }
  // printf("%s", to_find);
  return (to_find);
  }*/

int main(void)
{
  char *str = "coucouadz";
  char *toto = "a";
  my_strstr(str, toto);
  return (0);
}
