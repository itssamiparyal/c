#include <stdio.h>
struct student
{
    int id;
    char name[20];
    float fee;
};

int main()
{
    struct student s1;
    printf("Enter the id,name,fee of s1:\n");
    scanf("%d %s %f", &s1.id, s1.name, &s1.fee);
    printf("Id = %d ,name = %s,fee = %.2f", s1.id, s1.name, s1.fee);
    return 0;
}