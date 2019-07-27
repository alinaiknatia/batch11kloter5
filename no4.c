#include <stdio.h>

int main()
{
char kata[100];
int i, vowels;
vowels=0;
printf("count_vowels: ");
scanf("%[^\n]", kata);
for (i=0;kata[i]!=0;i++){
    if (kata[i]=='a'||kata[i]=='i'||kata[i]=='u'||kata[i]=='e'||kata[i]=='o'||
    kata[i]=='A'||kata[i]=='I'||kata[i]=='U'||kata[i]=='E'||kata[i]=='O')
{
    vowels++;
}
}
printf("vowels: %d", vowels);
return 0;
}
