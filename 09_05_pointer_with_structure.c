#include<stdio.h>
struct emp{
    int code;
    char name;
};
int main()
{
    struct emp e1;
    struct emp *ptr;
    ptr = &e1;
    //(*ptr).code = 101; // this is also work, parenthesis is very imp for preceddence.
    ptr ->code = 101;
    printf("%d", e1.code);
    return 0;
}