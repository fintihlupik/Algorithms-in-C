#include <stdio.h>

void    ft_swap(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}


int main ()
{
    int x = 5;
    int y = 10;
    ft_swap(&x, &y);
    printf("%d\n", x);
    printf("%d\n", y);
    return (0);
}