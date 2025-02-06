#include <stdio.h>

void	ft_swap(int *A, int *B)
{
    int tmp;

    tmp = *A; 
    *A = *B;
    *B = tmp;



}

int main()
{
    int a;
    int b;

    a = 5;
    b = 10;
    
    printf("a: %d,  b: %d \n\n", a, b);
    
    ft_swap(&a, &b);

   printf ("A: %d || B: %d", a, b);

}

// shoudl know the * 