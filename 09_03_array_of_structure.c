#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name;
};
int main()
{
    struct employee facebook[100];

    facebook[0].code = 200;
    facebook[0].salary = 2500.45;
    strcpy(facebook[0].name, "Amar");

    facebook[1].code = 300;
    facebook[1].salary = 2200.45;
    strcpy(facebook[1].name, "Samir");

    facebook[2].code = 400;
    facebook[2].salary = 2400.45;
    strcpy(facebook[2].name, "Mark");
    
    printf("done!");
    
    return 0;
}