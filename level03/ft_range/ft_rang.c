#include <unistd.h>
#include <stdlib.h>
#include <libc.h>


int *ft_range(int start, int end)
{
    int *rang;
    int i;

    if (start > end)
        rang = malloc(sizeof(int) * (start - end) + 1);
    else
        rang = malloc(sizeof(int) * (end - start) + 1);

    i = 0;
    while (start != end)
    {
        rang[i++] = start;
        start += (start > end) ? -1 : 1;
    }
    rang[i] = start;
    return (rang);
}

int main()
{
    int start = -1;
    int end = 2;

   int *rang = ft_range(1, 3);

    int j = 0;
    while (rang[j])
        j++;
   for (int i =0; i < j; i++)
   {
        printf("%d", rang[i]);
   }
}