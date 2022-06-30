#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i,*ptr;
    ptr=a;
    for (i=0;i<5;i++)
        printf("%d\t",ptr[i]);
}