#include <stdio.h>

int main()
{
    int a, b, c, subst;

    printf("VOU ORGANIZAR OS TRÊS VALORES DIGITADOS EM ORDEM CRESCENTE\n");

    printf("\nValor 1°: ");
    scanf("%d", &a);
    printf("Valor 2°: ");
    scanf("%d", &b);
    printf("Valor 3°: ");
    scanf("%d", &c);
    
    if(a > b){
        subst = a;
        a = b;
        b = subst;
    }

    if(a > c){
        subst = a;
        a = c;
        c = subst;
    }

    if(b > c){
        subst = b;
        b = c;
        c = subst;
    }

    printf("VALORES EM OREDEM CRESCENTE: %d %d %d", a, b, c);
    
    return 0;
}