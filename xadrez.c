#include <stdio.h>
//reversividade torre
void movertorre(int casas)
{
	if (casas > 0)
	{
		movertorre(casas - 1);
		printf("direita\n");
	}
}
//reversividade e loop aninhado
void moverbispo1(int casas)
{
	while (casas > 0)
	{
		//printf("cima\n");
		for (int b = 1; b <= 1; b++)
		{//imprime os valores de b
			printf("cima\n");
		}//imprimr os valore de "casas"
		printf(", direita!\n");
		casas--;
	}
}//reversividade rainha
void moverrainha(int casas)
{
	if (casas > 0)
	{
		moverrainha(casas - 1);
		printf("esquerda\n");
	}
}

int main()
{
	printf("\ntorre:\n");
	movertorre(5);
	printf("\nbispo: \n");
	moverbispo1(5);
	printf("\n rainha:\n");
	moverrainha(8);
//loop aninhado com multiplas variaveis
	printf("\nMovimento do Cavalo:\n");

	int c = 1;//variavel de controle
	for (int a = 1; a < 2; a++)
	{
		for (int b = 2; b > 0; b--)
		{// imprime valores de b
			printf("cima\n");
		}//imprime valores de a
		if (c == 1)
		{
			printf("direita\n");
		}
	}c++;//incremento

	return 0;
}