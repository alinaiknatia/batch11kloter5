#include<stdio.h>

int main ()
{
    int n,i,j;
    printf ("Cetak_gambar: "); scanf("%d", &n);

    if(n>2)
    {
        for (i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if ((i==n/2) ||(j==0) || (j== n-1))
                {
                    printf("* ");
                }
                else if ((i==n-2) || (i==n-1))
                    {
                        printf ("= ");
                    }
                else
                {
                    printf ("= ");
                }
            }
            printf ("\n");
        }

    }
return 0;
}