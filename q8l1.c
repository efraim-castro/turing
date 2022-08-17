#include <stdio.h>

int main(int argc, char**argv)
{

	int a,b,c;

	printf("Digite os três lados do triâgulo: ");
	scanf("%d%d%d", &a, &b, &c);

	if((a+b)<c || (b+c)<a || (a+c)<b)
	{
		printf("Não forma um triângulo.\n");
		return 0;
	}
	if(a==b && b==c)
	{
		printf("O triângulo é |EQUILÁTERO|.\n");
		return 0;
	}
	else if(a!=b && b!=c && c!=a)
	{
		printf("O triângulo é |ESCALENO|.\n");
		return 0;
	}
	else
	{
		printf("O triângulo é |ISÓSCELES|.\n");
	}

	return 0;
}
