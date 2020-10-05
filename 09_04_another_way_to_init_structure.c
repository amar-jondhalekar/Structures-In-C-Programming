#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char *name;
};
int main()
{
    struct employee facebook = {100, 2500, "Amar"};
    // struct employee facebook = {0};

    printf("The code of facebook emp1: %d\n", facebook.code);
    printf("The salary of facebook emp1: %f\n", facebook.salary);
    printf("The name of facebook emp1: %s\n", facebook.name);
    printf("done!");
    
    return 0;
}