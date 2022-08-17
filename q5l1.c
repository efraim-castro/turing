#include <stdio.h>

int main(int argc, char** argv)
{
	int a, b, c, menor;

	printf("Digite o valor de 3 produtos: \n");
	scanf("%d %d %d", &a, &b, &c);

	menor = a;

	if(b<menor)
	{
		menor=b;

	}

	if(c<menor)
	{
		menor=c;
	}

	printf("O produto de menor valor é o que custa: %d", menor);

	return 0;

}
