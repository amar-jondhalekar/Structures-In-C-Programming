#include<stdio.h>
#include<string.h>
struct Books
{
    char name[20];
    char author[20];
    int price;

};

void printStruct(struct Books bk1)
{
    printf("The name of book is: %s\n", bk1.name);
    printf("The name of author is: %s\n", bk1.author);
    printf("The price of book is: %d\n", bk1.price);
}
int main()
{
    struct Books bk1;
    strcpy(bk1.name, "c programming");
    strcpy(bk1.author, "Dennis Rechie");
    bk1.price = 89; // . is a member operator
    printStruct(bk1);
    return 0;
}