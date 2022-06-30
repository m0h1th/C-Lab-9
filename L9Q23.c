#define PRINT1 printf("kiran");
#define PRINT2 printf("Bhadra");
#define PRINT3 printf("\n");PRINT1;printf("\t");PRINT2;printf("\n");
#include <stdio.h>
int main()
{
    PRINT1;
    PRINT2;
    PRINT3 //notice the absence of ; here
}