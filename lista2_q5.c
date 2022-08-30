#include<stdio.h>

int main()
{
    int n;
    printf("Digite um numero entre zero e dez: ");
    scanf("%d", &n);
    while(n<0 || n>10)
    {
        printf("Valor invalido, digite novamente: ");
        scanf("%d", &n);
    }
    return 0;
}
