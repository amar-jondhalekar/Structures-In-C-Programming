#include<stdio.h>
typedef struct date{
        int date;
        int month;
        int year;
}date;

date display(date d1)
{
    printf("My birth-date is: %d/%d/%d\n", d1.date, d1.month, d1.year);
}

int main()
{
    date d1 = {22, 12, 1997};
    date d2 = {11, 1, 2000};
    display(d1);
    display(d2);
    return 0;
}