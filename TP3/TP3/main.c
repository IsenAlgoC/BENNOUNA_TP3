#include<stdlib.h>
#include<stdio.h>
// #define carre(x) x * x ancienne macro
#define carre(x) ((x) * (x))

int main() {

	int Nb = 5;
	printf("Le carre est: %i \n", carre(Nb)); // carre = 25
	printf("Le carre est: %i \n", carre(Nb+1)); // carre = 11 ; carre = 36 avec la nouvelle macro



}