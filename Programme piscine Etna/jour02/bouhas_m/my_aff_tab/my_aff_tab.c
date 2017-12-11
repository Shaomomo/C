/*
** my_aff_tab.c for my_aff_tab.c in /home/bouhastine/c/jour02/bouhas_m/my_aff_tab
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Tue Oct 17 20:18:27 2017 BOUHASTINE Mohamed
** Last update Tue Oct 17 23:40:06 2017 BOUHASTINE Mohamed
*/
void	my_putchar(char c);
void	 my_aff_tab(char str[])
{
  int	 i;
  char	*str1;

  i = 0;
  str1= str;
  while (str1[i] != '\0')
    {
      my_putchar(str1[i]);
      i = i + 1;	
    }
}
