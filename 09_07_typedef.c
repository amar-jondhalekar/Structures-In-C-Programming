#include<stdio.h>
typedef struct emp{
    int code;
    float salary;
    char name[20];
}emp;
void show(struct emp emp1)
{
    printf("The employee code is: %d\n", emp1.code);
    printf("The employee salary is: %f\n", emp1.salary);
    printf("The employee name is: %s\n", emp1.name);
    emp1.code = 22;
}
int main()
{
     emp e1;
     emp *ptr;
    ptr =  &e1;
    ptr -> code = 1220;
    ptr -> salary = 11.34;
    strcpy(ptr->name, "Amar");
    show(e1);
    printf("The code of emp is: %d\n", e1.code);
    return 0;
}