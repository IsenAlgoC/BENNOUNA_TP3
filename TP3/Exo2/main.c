#include<stdlib.h>
#include<stdio.h>
void func(unsigned int num, int pos)
{
    
    
    if ((num >> pos) & 1 == 1) {
        printf("[%u eme bit de %u]=ON\n", pos, num);
    }
    else
    {
        printf("[%u eme bit de %u]=OFF\n", pos, num);
    }
    
    //printf("[%u eme bit de %u]=%u\n", pos, num, (num >> pos) & 1);
}
int main()
{
   unsigned long i = 2868838400;
    int compteur = 0;
    while (i > 0)
    {
        i >>= 1;
        compteur++;
    }
    printf("Nombre d'octet : %d\n", compteur/8) ;
    printf("Nombre de bits : %d\n", compteur);
    
    int tab[32],j;

    unsigned long nbr = 2868838400;

    for (j = 0; nbr > 0; j++)
    {
        tab[j] = nbr % 2;
        nbr = nbr / 2;
    }

    printf("\nLe nombre binaire est = ");

    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", tab[j]);
    }


    for (int i = 0; i < 32; i++)
    {
        func(2868838400, i);
    }




    system("pause");
    return 0;
}