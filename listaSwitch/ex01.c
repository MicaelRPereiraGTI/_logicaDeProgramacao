#include <stdio.h>

int main()
{

	char opcao[10];

	printf("Digite uma das opções abaixo: \n");
	scanf("%c", &opcao);
	printf("S - Soma\n");
	printf("P - Produto\n");
	printf("U - Subtracao\n");
	printf("D - Divisao\n");
	printf("Q - Sair\n");
	
	switch (opcao)
	{
	case /* constant-expression */:
		/* code */
		break;
	
	default:
		break;
	}

    return 0;
}
