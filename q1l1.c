#include <stdio.h>

int main(int arrc, char** argv)
{

	int a,b;

	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);

	printf("Digite o segundo  numero: \n");
	scanf("%d", &b);

	if(a>b)
	{
		printf("O maior numero é o %d\n", a);
	}

	else
	{
		printf("O maior numero é o %d\n", b);
	}

	return 0;
}
