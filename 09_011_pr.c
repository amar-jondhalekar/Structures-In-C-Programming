#include<stdio.h>
typedef struct complex{
    int real;
    int img;
}comp;

void display(comp c)
{
    printf("The value for real part is: %d\n", c.real);
    printf("The value for img part is: %d\n", c.img);
}
int main()
{
    comp cnum[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num\n", i+1);
        scanf("%d", &cnum[i].real);

        printf("Enter the img value for  %d num\n", i+1);
        scanf("%d", &cnum[i].img);
    }
    for(int i = 0; i < 5; i++)
    {
        display(cnum[i]);
    }
    return 0;
}