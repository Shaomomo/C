#include <stdlib.h>
#include <stdio.h>

typedef struct t_list // construction de la structure du nom de t_list
{
  struct t_list *next;
  char          *data;
} t_list;

t_list          *add_node(t_list *begin, char *data) //Création d'une allocation dynamique
{
  t_list        *node;

  node = malloc(sizeof(t_list)); //Node prend la taille de la liste chaine t_list

  node->data = data;
  node->next = begin;
  return (node);
}

t_list *my_params_in_list(int argc, char **argv) // permet d'attribuer les string saisie dans une allocation dynamique
{
  t_list *last;
  int i;

  i = 0;
  last = NULL;
  while (i < argc)
    {
      last = add_node(last, argv[i]); // prend la valeur de la liste chainé
      i++;
    }
  return (last);
}

int		 my_list_size(t_list *begin)
{
  int		 i;
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

void		my_rev_list(t_list **begin)
{
  int		i;
  t_list	*temp2;
  t_list	*nxt;
  t_list	*tmp;
  t_list	*
  int		compt;
  
  i = 0;
  nxt = NULL;
  prev = NULL;
  tmp = (*begin)->next;
  compt = my_list_size(*begin);//récupération du nombre de string
  while (i < compt)
    {
      temp2 = tmp->next;
      (*begin)->next = nxt;
      tmp->next = (*begin);
      temp2 = tmp->next;
      (*begin) = 
      //(*begin)= temp2->next;
      tmp = temp2->next;
      
      /* (*begin)->next = nxt;
      nxt = (*begin);
      (*begin) = prev;*/
      //prev = (*begin);

      //nxt->next = ;
      //prev = nxt->next;
      
      //prev = (*begin);
      i++;
    }
}

int		main(int argc, char **argv)
{
  t_list	*co; //création d'une liste chainé afin de pouvoir afficher le contenue de la saisie
  // t_list	**co2;
  co = my_params_in_list(argc, argv);
  // puts("test");
  my_rev_list(&co);
  //puts("debug");
  //printf("%d\n", my_list_size(co));
  //printf("%d\n", my_list_size(co));
  //printf("%s\n", my_rev_list(&co));
  while(co != NULL)
    {
      //puts("test");
      printf("%s\n", co->data);
      co = co->next;
      //puts("debug");
      
    }
   printf("%d\n", my_list_size(co));
  return (0);
}
