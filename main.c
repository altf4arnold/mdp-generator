#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bufferclear()					// ce module sert a vider le buffer clavier
{
    int c = 0;
    while (c != '\n' && c != EOF)			//tant que le buffer est plein
    {
        c = getchar();					//clear du buffer clavier
    }
}

int main()
{
    int a,b,c,d;
    char i,j,k;
    srand(time(NULL));  // initialisation du générateur aléatoire
    i='o';
    while (i=='o')
    {
	printf("\nEntrez le nombre de caracteres : ");
        scanf("%d",&a);
        //printf ("%d",a);	// test
	//system("echo test");	// test
        c=0;
	printf ("\n");
        while (c<a)
        {
            d=rand()%3;
            if (d==1)
            {
                j=rand()%10 +48;
            }
            else if (d==2)
            {
                j=rand()%26 +65;
            }
            else
            {
                j=rand()%26 +97;
            }
            printf("%c",j);
            c++;
        }
    printf ("\n\n");
    printf ("voullez vous reexecuter le programme? o/n :");
    d=1;
    while (d==1)
    {
        scanf ("%c",&i);
        if (i=='o')
        {
            d=0;
        }
        else if (i=='O')
        {
            i='o';
            d=0;
        }
        else if (i=='n')
        {
            d=0;
        }
        else if (i=='N')
        {
            d=0;
        }
    }
    }
    return 0;
}
