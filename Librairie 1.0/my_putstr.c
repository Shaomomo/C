/*
** my_putstr.c for my_putstr.c in /home/bouhastine/c/jour03/bouhas_m/my_putstr
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 01:10:33 2017 BOUHASTINE Mohamed
** Last update Wed Oct 18 07:11:56 2017 BOUHASTINE Mohamed
*/

void	 my_putchar(char c);
void	 my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
