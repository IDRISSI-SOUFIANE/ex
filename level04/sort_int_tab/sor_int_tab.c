#include <unistd.h>
#include <libc.h>

int main()
{
    int i;
    int j;
    int tmp;

    i = 0;
    int arr[] = {10, 5, 4, 3, 2, 1, 8, 9};
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    // printf("%d", size_arr);

    while (i < size_arr)
    {
        j = i;
        while (j < size_arr)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < size_arr)
    {
        printf("%d ", arr[i]);
        i++;
    }

}

// sort_int_tab(arr, 8);