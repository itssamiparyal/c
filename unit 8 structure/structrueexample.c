// wap to calculate the percentage of n students in m subjects

#include <stdio.h>
#define S 100 // students size
#define M 10  // subjects no. size

typedef struct student
{
    int id;
    char name[20];
    float marks[M];

} STUD;

STUD st[S]; // 100 students 6400 bytes memory allocated

int main()
{
    int m, n, i, j;
    printf("How many students?\n");
    scanf("%d", &m);
    printf("How many subjetcs?\n");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        printf("Student[%d] id = ", i + 1);
        scanf("%d", &st[i].id);
        printf("Student[%d] name = ", i + 1);
        scanf("%s", st[i].name);
        for (j = 0; j < n; j++)
        {
            printf("Student[%d]'s marks[%d]=", i + 1, j + 1);
            scanf("%f", &st[i].marks[j]);
        }
    }
    float total = 0, percantage = 0;
    printf("\nID.\tNAME\t\t");
    for (j = 0; i < n; j++)
    {
        printf("m%d\t", j + 1);
    }
    printf("TOTAL\tPERCENTAGE\n");
    for (i = 0; i < m; i++)
    {
        printf("%d\t%s\t", st[i].id, st[i].name);
        for (j = 0; j < n; j++)
        {
            printf("%.2f\t", st[i].marks[j]);
            total += st[i].marks[j];
        }
        percantage = (total / (n  *100) * 100;
        printf("%.2f\t%.2f\n", total, percantage);
    }

    return 0;
}