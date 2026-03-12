#include <stdio.h>

int main()
{
    int choice, num, n, i;
    float radius, area, sum;

    do
    {
        printf("\nMENU\n");
        printf("1. Find area of circle\n");
        printf("2. Check odd or even\n");
        printf("3. Find sum of N numbers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("Number is Even\n");
            else
                printf("Number is Odd\n");
            break;

        case 3:
            printf("Enter value of N: ");
            scanf("%d", &n);
            sum = 0;
            for (i = 1; i <= n; i++)
            {
                sum = sum + i;
            }
            printf("Sum of first %d numbers = %.0f\n", n, sum);
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}