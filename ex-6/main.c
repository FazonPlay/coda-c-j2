#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[50];
    int age;

    printf("Hi, what is your name?\n");
    scanf("%s", name);
    printf("hi %s, what is your age?\n", name);
    scanf("%d", &age);

    int year = 2024-age;
    int old_age = year-1;

    printf("%s you're born in year %d however if you're born at the end of the year then you're %d.\n", name , year, old_age);

    exit(0);
}