#include <stdio.h>

Sorting(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp;
            if (*(p + i) > *(p + j)) // a[i]>a[j]
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main()
{
    int a[20], n, i;
    printf("Enter how many numbers:\n");
    scanf("%d", &n);
    printf("Enter the values: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]= ", i + 1);
        scanf("%d", a + i);
    }
    Sorting(a, n);
    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    return 0;
}