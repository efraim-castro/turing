#include<stdio.h>
int main()
{
    float n, soma = 0, i=0;
    float media;
    while(i<5)
    {
        printf("Digite o numero: ");
        scanf("%f", &n);
        soma = soma + n;
        i++;
    }
    media = soma/5;
    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    return 0;
}
