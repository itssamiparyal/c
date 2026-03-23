#include <stdio.h>
#define SIZE 100

typedef struct employee
{
    int eid;
    char name[20];
    float salary;
} emp;
emp e[SIZE];

int main()
{
    int n;
    printf("how many employees?\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter emp%d id =", i + 1);
        scanf("%d", &e[i].eid);
        printf("enter emp%d name =", i + 1);
        scanf("%s", e[i].name);
        printf("enter emp %d salary=", i + 1);
        scanf("%f", &e[i].salary);
    }
    printf("output display");
    printf("Sn\tid\tname\tsalary\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t %d \t %s \t %.2f", i + 1, e[i].eid, e[i].name, e[i].salary);
        printf("\n");
    }
    return 0;
}
