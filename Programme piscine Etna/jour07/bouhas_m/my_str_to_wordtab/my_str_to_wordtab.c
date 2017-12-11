//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/*
void my_putchar(char c)
{
  write(1, &c, 1);
  }*/

voidmy_putchar(char c);

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
  int i;
  int j;
  char *chaine;

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
  }*/

/*
char **my_str_to_wordtab(char *str)
{
  int i;
  int j;
  char *chaine;
  int compt;
  
  i = 0;
  j = 0;
  compt = strlen(str);
  while (i < compt)
    {
      if ((str[i] >= 48 && str[i] <= 57)
	  || (str[i] >= 65 && str[i] <= 90)
	  || (str [i] >= 97 && str[i] <= 122))
	{
	  chaine[i] = str[i];
	}
      else if ( str[i] == '\0')
	{
	  chaine[i] = '\n';
	}
      i++;
    }
  chaine[i] = '\0';
  return (chaine);
  }*/

int my_words_ammount(char *str)
{
  int i;
  int cpt;

  cpt = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57)
	  || (str[i] >= 65 && str[i] <= 90)
	  || (str [i] >= 97 && str[i] <= 122))
	{
	  cpt++;
	  while ((str[i] >= 48 && str[i] <= 57)
		 || (str[i] >= 65 && str[i] <= 90)
		 || (str [i] >= 97 && str[i] <= 122))
	    i++;
	}
      i++;
    }
  return (cpt);
}
/*char research_alphanum(char *str)
{
  int i;

  i = 0;
  while( str[i] != '\0')
    {
      if (((str[i] >= 48 && str[i] <= 57)
	   || (str[i] >= 65 && str[i] <= 90)
	   || (str[i] >= 97 && str[i] <= 122)))
	{
	  i++;
	}
    }
  return(str);
}
*/
int my_chars_ammount(char *str, int i)
{
  int cpt;

  cpt = 0;
  while (str[i] && ((str[i] >= 48 && str[i] <= 57)
		    || (str[i] >= 65 && str[i] <= 90)
		    || (str[i] >= 97 && str[i] <= 122)))
    {
      cpt = cpt + 1;
      i = i + 1;
    }
  return (cpt);
}

char **my_str_to_wordtab(char *str)
{
  int i;
  int n;
  int words;
  int wordsize;
  char **arr;
  words = my_words_ammount(str);
  i = 0;
  n = 0;
  arr = (char **)malloc(sizeof(char *) * words);
  while (words > 0 && str[i])
    {
      (if (((str[i] >= 48 && str[i] <= 57)
	       || (str[i] >= 65 && str[i] <= 90)
	       || (str[i] >= 97 && str[i] <= 122)))
	    {
	  wordsize = my_chars_ammount(str, i);
	  arr[n] = my_strdup(str + i);
	  arr[n][wordsize] = '\0';
	  n++;
	  words--;
	  i += wordsize;
	}
      i++;
    }
  arr[my_words_ammount(my_strdup(str))] = NULL;
  //  printf("%s", arr);
  return (arr);
}

int main(void)
{
  char * str;
  str = "coucou§ copain! comment tu vas ";
  my_str_to_wordtab(str);
  return (0);
}
