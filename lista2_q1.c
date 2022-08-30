#include<stdio.h>
int main()
{
    int n, maior=-99999999999, i=0;
    while(i<5)
    {
        printf("Digite o numero: ");
        scanf("%d", &n);
        if(n>maior)
        {
            maior = n;
        }
        i++;
    }
    printf("Maior numero: %d\n", maior);

    return 0;

}
