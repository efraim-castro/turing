#include <stdio.h>
#include <math.h>

int main(int argc, char**argv)
{
	float r,x1, x2, d, x, a, b, c;

	printf("Digite os parâmetros a:");
	scanf("%f", &a);

	if(a==0)
	{
		printf("A equação é de 1º grau: \n");
		return 0;
	}

	printf("Digite o parâmetro b: \n");
	scanf("%f",&b);
	printf("Digite o parâmetro c: \n");
	scanf("%f",&c);

	d = (b*b)-(4*a*c);

	if(d<0)
	{
		printf("A equação não possui raizes reais.\n");
		return 0;
	}

	x = -b/2*a;

	if(d==0)
	{
		x1 = -b/2*a;
		printf("A equação possui somente uma raiz: %.2f\n", x1);
	}

	if(d>0)
	{
		r = sqrt(d);
		x1 = ((-b-r)/2*a);
		x2 = ((-b+r)/2*a);
		printf("O valor das raizes é igual a: x1=%.2f, x2=%2.f.\n", x1,x2);
	}

	return 0;
}
