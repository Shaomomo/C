/*
** my_prev_char.c for my_prev_char.c in /home/bouhastine/bouhas_m/c/my_prev_char
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Mon Oct 16 17:11:38 2017 BOUHASTINE Mohamed
** Last update Mon Oct 16 18:59:51 2017 BOUHASTINE Mohamed
*/

char my_prev_char(char c)
{
  if (c == 'a')
    {
      c = 'z';
    }
  else if (c == 'A')
    {
      c = 'Z';
    }
  else if ((c > 'A' && c <= 'Z') ||
	   (c > 'a' && c <= 'z'))
    {
      c = c - 1;
    }
  else
    {
      c = ' ';
    }
  return (c);
}

