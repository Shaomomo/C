/*
** my_find_node_elm_eq_in_list.c for my_find_node_elm_eq_in_list.c in /home/bouhastine/c/jour10/bouhas_m/my_find_node_elm_eq_in_list
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Wed Oct 25 11:30:43 2017 BOUHASTINE Mohamed
** Last update Wed Oct 25 11:30:46 2017 BOUHASTINE Mohamed
*/

#include "my_list.h"
#include <stdlib.h>

t_list		*my_find_node_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  t_list	*list;
  
  list = begin;
  while (list != NULL)
    {
      if (cmp(list->data, data_ref) == 0)
	{
	  return (list);
	}
      list = list->next;
    }
  return (NULL);
}

int	 my_strcmp(char *s1, char *s2)
{
  int	 i;
  int	 retour;

  retour = 0;
  i = 0;
  while (*s1 != '\0' || *s2 != '\0')
    {
      if (s1[i] < s2[i])
	{
	  retour = -1;
	}
      else if (s1[i] > s2[i])
	{
	  retour = 1;
	}
      else if (s1[i] == s2[i])
	{
	  retour = 0;
	}
      i = i + 1;
    }
  return (retour);
}
