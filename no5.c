#include <stdio.h>
 
int main()
{
  char kata, input[100], output[100];
  int abjad[26] = {0}, n, i, t, x;
 
  printf("Masukan kata: ");
  scanf("%[^\n]", input);
 
  n = strlen(input);
 
  for (i = 0; i < n; i++)
  {
    kata = input[i] - 'a';
    abjad[kata]++;
  }
 
  t = 0;

  for (kata = 'a'; kata <= 'z'; kata++)
  {
    x = kata - 'a';
 
    for (i = 0; i < abjad[x]; i++)
    {
      output[t] = kata;
      t++;
    }
  }
  output[t] = '\0';
 
  printf("%s", output);
 
  return 0;
}