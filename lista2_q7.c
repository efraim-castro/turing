#include<stdio.h>

int main()
{
    int n, qtdp=0, qtdi=0, i=0;
    while(i<10)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n%2==0)
        {
            qtdp++;
        }
        else
        {
            qtdi++;
        }
        i++;
    }
    printf("Quantidade de Pares: %d\n", qtdp);
    printf("Quantidade de Impares: %d\n", qtdi);
    return 0;
}
