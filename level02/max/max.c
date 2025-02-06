#include <unistd.h>
#include <stdio.h>

int max(int *arr, unsigned int len)
{
    int max;
    int i;

    i = 0;
    max = 0;
    while (i < len)
    {
        if (max < arr[i])
            max = arr[i];
        i++;
    }

    return (max);
    // printf("%d\n", max);

}

int main()
{
    int arr[] = {0, 9, 7, 8, 5, 4, 3, 2, 1, 100000000};
    size_t len = sizeof(arr) / sizeof(int);

    printf("%d", max (arr, len));
    return (0);
}