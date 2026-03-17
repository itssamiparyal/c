#include <stdio.h>
#include <string.h>

void main()
{
    char name[] = "harendra";
    char *np = strdup(name);
    printf("Name base address=%u\n", np);
    printf("Name base address=%u\n", name);
    printf("Acoording to strdup:\n");
    char *temp;
    for (temp = np; temp < np + strlen(name); temp++)
    {
        printf("%c", *temp);
    }
}