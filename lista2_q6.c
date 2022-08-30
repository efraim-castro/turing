#include<stdio.h>
int main()
{
    int base, exp, i=0, valor=1;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &exp);

    while(i<exp)
    {
        valor = valor * base;
        i = i + 1;
    }
    printf("Resultado: %d\n", valor);
    return 0;
}
