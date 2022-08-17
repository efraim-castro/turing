#include <stdio.h>

int main(int argc, char** argv)
{

	float n1,n2,pf,nf, n;

	printf("Digite a nota 1:\n");
	scanf("%f", &n1);

	printf("Digite a nota 2:\n");
	scanf("%f", &n2);

	n=(n1+n2)/2;
	nf=n;

	if(n>=8)
	{
	 	printf("Você foi aprovado \n");
	}

	else
	{
		printf("Digite a nota da PF:\n");

		n=(n1+n2+pf)/3;
		nf=n;

		if(n>=6)
		{
			printf("Você foi aprovado\n");
		}

		else
		{
			printf("Você foi reprovado\n");
		}
	}

	printf("Sua nota  foi %.2f\n", nf);
	
	return 0;

}
