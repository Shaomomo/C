/*
** my_rm_all_eq_from_list.c for my_rm_all_eq_from_list.c in /home/bouhastine/c/jour10/bouhas_m/my_rm_all_eq_from_list
** 
** Made by BOUHASTINE Mohamed
** Login   <bouhas_m@etna-alternance.net>
** 
** Started on  Wed Oct 25 11:28:18 2017 BOUHASTINE Mohamed
** Last update Wed Oct 25 11:28:23 2017 BOUHASTINE Mohamed
*/

#include "my_list.h"
#include <stdlib.h>

t_list          *add_node(t_list *begin, char *data)
{
  t_list        *node;

  node = malloc(sizeof(t_list));
  node->data = malloc(sizeof(char)* my_strlen(data) + 1);
  node->data = data;
  node->next = begin;
  return (node);
}

int	 my_strlen(char *str)
{
  int	 i;

  i = 0;
  while (*str != '\0')
    {
      str = str + 1;
      i++;
    }
  return (i);
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

void  my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  
  while (*begin != NULL)
    {
      if (cmp((*begin)->data, data_ref) == 0)
	{
	  (*begin) = (*begin)->next;
	}
      (*begin) = (*begin)->next;
    }
}
