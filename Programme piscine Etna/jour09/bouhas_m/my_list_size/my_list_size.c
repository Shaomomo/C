#include <stdlib.h>

typedef struct	 t_list 
{
  struct t_list *next;
  char          *data;
}		 t_list;

t_list          *add_node(t_list *begin, char *data)
{
  t_list        *node;

  node = malloc(sizeof(t_list));

  node->data = data;
  node->next = begin;
  return (node);
}

t_list		 *my_params_in_list(int argc, char **argv)
{
  t_list	 *last;
  int	 i;

  i = 0;
  last = NULL;
  while (i < argc)
    {
      last = add_node(last, argv[i]);
      i++;
    }
  return (last);
}

int		 my_list_size(t_list *begin)
  {
    int	         i;
    t_list	 *co;

    i = 0;
    co = begin;
    while (co != NULL)
      {
	co = co->next;
	i++;
      }
    return (i);
}
