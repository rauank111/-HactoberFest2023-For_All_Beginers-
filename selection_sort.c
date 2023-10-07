//here is my code of selection sort.//
#include <stdio.h>
#include <stdlib.h>
int a[100];
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void selection_sort(int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n - 1; j++)
        {

            if (a[j + 1] < a[min])
            {
                min = j + 1;
            }
        }
        swap(&a[min], &a[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}


int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(n);
    return 0;
}
