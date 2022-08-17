#include <stdio.h>

int main(int argc, char** argv)
{

	int a;

	printf("Digite um número: ");

	if(a>0)
	{
		printf("\nO numero é positivo\n");
	}

	else if(a<0)
	{
		printf("\nO numero é negativo\n");
	}

	else
	{
		printf("\n O numero é zero");
	}

	return 0;
}
