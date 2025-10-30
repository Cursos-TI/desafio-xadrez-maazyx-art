#include <stdio.h>
int main()
{
	int t = 5; // inicializador
	printf("\n          TORRE \n");
	do
	{
		//printf("••••••torre se movendo....\n");
		printf("[%d] Direita_\n", t);
		t--; //decremento
	} while (t >= 1);
	//enquanto inicializador for maior que um, o  codigo funcionará.

	int b = 5; //inicializador
	printf("\n         BISPO\n");
	while (b >= 1)
	{
		//printf("••••••••bispo se movendo....\n");
		printf("[%d]/Cima|\n", b);
		printf("[%d]/Direita_\n", b);
		b--; //decremento
	}

	printf("\n       RAINHA\n");

	for (int r = 8; r >= 1; r--) //se o inicializador for maior ou igual um, o  codigo funcionará.
	{
		//printf("•••••••rainha se movendo.....\n");
		printf("[%d]_Esquerda\n", r);
	}

      printf("\n");  

     return 0;
}