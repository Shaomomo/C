#include <unistd.h>
#include <stdlib.h>

char search_alphanum (char *str)
{
  int	i;
  char *chaine;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57)
	  || (str[i] >= 65 && str[i] <= 90)
	  || (str[i] >= 97 && str[i] <= 122))
	{
	  chaine[i] = str[i];
	  i++;
	}
    }
  return (chaine[i]);
}

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

char *my_strdup(char *str)
{
  int	 i;
  int	 j;
  char	 *chaine;

  i = 0;
  j = 0;
  if (!(chaine =  malloc(sizeof(char) * my_strlen(str) + 1)))
    {
      return (0);
    }
  while (str[i] != '\0')
    {
      j = 0;
      while (str[j] != '\0')
	{
	  chaine[j] = str[j];
	  j++;
	}
      i++;
    }
  return (chaine);
}

char **my_str_to_wordtab(char *str)
{
  int	 i;
  //int	 compt;
  char	 *chaine;

  i = 0;
  // compt = 0;
  while(str[i] != '\0')
    {
      if(search_alphanum(str))
	{
	  chaine = my_strdup(str);
	}
      else if ((str[i] < '0' && str[i] > '9') ||
	       (str[i] < 'a' && str[i] > 'z') ||
	       (str[i] < 'A' && str[i] > 'Z'))
	{
	  chaine[i]='\n';
	}
      i++;
    }
  chaine[i] == '\0';
  return (chaine);
}

int main(void)
{
  char *str ="coucou copain djod!dfdfs dsf s**";
  my_str_to_wordtab(str);
  return (0);
}
