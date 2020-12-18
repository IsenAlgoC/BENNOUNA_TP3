#include<stdlib.h>
#include<stdio.h>
void func(unsigned int num, int pos)
{
    /*
      Retourne le bit à la position pos
      de la variable num
      pos variant de 0 à 32
      num= a0 * 2^0 + a1 * 2^1 + a2 * 2^2 + ... + an * 2^n
      avec a[i] appartenant à {0,1}
    */
    printf("[%u eme bit de %u]=%u\n", pos, num, (num >> pos) & 1);
}
int main() {

    {
        for (int i = 0; i < 32; i++)
        {
            func(2868838400, i);
        }
        
        
    }

}