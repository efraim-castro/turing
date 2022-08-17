#include <stdio.h>

int main(int argc, char** argv)
{

	int n1, n2, n3, maior;

	printf("Digite os numeros: \n");
	scanf("%d %d %d", &n1, &n2, &n3);

	maior = n1;

	if(n2>maior)
	{
		maior = n2;
	}

	if(n3>maior)
	{
		maior = n3;
	}

	printf("O maior numero é o %d", maior);

	return 0;

}
