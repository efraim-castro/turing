#include <stdio.h>

int main(int argc, char** argv)
{

	int n1,n2,n3,maior,menor;

	printf("Digite os numeros: \n");
	scanf("%d %d %d",&n1,&n2,&n3);

	maior = n1;
	menor = n1;

	if(n2>maior)
	{
		maior=n2;
		if(n1>n3)
		{
			menor=n3;
		}

		else
		{
			menor = n1;
		}
	}

	if(n3>maior)
	{
		maior=n3;
		if(n1>n2)
		{
			menor=n2;
		}

		else
		{
			menor = n1;
		}
	}

	else
	{
		if(n2>n3)
		{
			menor=n3;
		}

		else
		{
			menor = n2;
		}
	}

	printf("\nO maior numero é %d e o menor é %d\n",maior,menor);

	
	return 0;
}
