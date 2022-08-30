#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    if(n1<n2)
    {
        n1=n1+1;
        while(n1<n2)
        {
            printf("%d\n", n1);
            n1 = n1 + 1;
        }
    }
    else{
        n2=n2+1;
        while(n2<n1)
        {
            printf("%d\n", n2);
            n2 = n2 + 1;
        }
    }
    return 0;
}
