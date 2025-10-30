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

	for (int r = 8; r >= 1; r--) //enquanto inicializador for maior que um, o  codigo funcionará.
	{
		//printf("•••••••rainha se movendo.....\n");
		printf("[%d]_Esquerda\n", r);
	}

      printf("\n");  

           // printf("\n        Cavalo\n");
	int cavalo = 1;//inicializador

	while (cavalo>=1)//loop externo, movimento para baixo.
	{  printf("\nMOVIMENTO DO CAVALO\n");
		for (int e = 2; e >= 1; e--)//loop interno, movimento para a esquerda
	      
		{
		   //printf("•••••••Cavalo se movendo•••••••\n");
			printf("[%d]_esquerda\t",e);
			
		}
		printf("\n");
		//printf("•••••••Cavalo se movendo•••••••\n");
		printf("[%d]|baixo\n",cavalo);
        cavalo--;//decremento
	
    }
    return 0;
}