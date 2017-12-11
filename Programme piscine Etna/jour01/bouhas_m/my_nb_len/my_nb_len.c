/*
** my_nb_len.c for my_nb_len.c in /home/bouhastine/c/jour01/bouhas_m/my_nb_len
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Mon Oct 16 21:56:25 2017 BOUHASTINE Mohamed
** Last update Mon Oct 16 22:10:06 2017 BOUHASTINE Mohamed
*/
int my_nb_len(int n)
{
  int compteur = 49;
  while (n<-10 || n>10)
    {
      n = n/10;
      compteur = compteur + 1;
    }
  return (compteur);
}
