
#include <stdlib.h>

char *my_strdup(char *str)
{
  int i;
  char *string;
  int c;

  c = 0;
  while (str[c++] != '\0');

  string = malloc(sizeof(char) * (c + 1));
  i = 0;
  while (str[i] != '\0')
    {
      string[i] = str[i];
      i++;
    }
  string[i] = '\0';
  return (string);
}

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
      if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	  || (str [i] >= 97 && str[i] <= 122))
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
  return (arr);
}

int main(void)
{
  char *str;
  str = "coucou copain comment tu vas";
  my_str_to_wordtab(str);
  return (0);
}
