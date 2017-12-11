/*
** my_strlen.c for my_strlen.c in /home/bouhastine/c/jour03/bouhas_m/my_strlen
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 00:38:07 2017 BOUHASTINE Mohamed
** Last update Wed Oct 18 07:11:25 2017 BOUHASTINE Mohamed
*/

int my_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
    {
      str = str + 1;
      i++;
    }
  return (i);
}
