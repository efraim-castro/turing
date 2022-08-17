
#include <stdio.h>

int main(int argc, char** argv)
{
	int maior, menor, meio, a, b, c;

	maior=a;
	menor=a;
	meio=a;

	printf("Digite os valores: \n");
	scanf("%d %d %d", &a ,&b ,&c);

	if(b>maior)
	{
		maior=b;
		if(c>maior);
		{
			maior=c;
		}
			if(b>a)
			{
				menor=a;
				meio=b;
			}
	}

	if(c>maior)
	{
		maior=c;
		if(b>maior);
		{
			maior=b;
		}
			if(c>a)
			{
				menor=a;
				meio=c;
			}
	}

	else
	{
		if(b>a)
		{
			menor=a;
			meio=b;
		}
	}

	printf(" |%d| -> |%d| -> |%d|", maior,meio,menor);

	return 0;

}
