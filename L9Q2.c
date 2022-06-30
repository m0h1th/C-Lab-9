#include <stdio.h>
int main()
{
    int num=5,*ptr;
    ptr=&num;
    printf("\nThe value of the variable num is: %d\n",*ptr);
    printf("\nThe value of the variable ptr is: %u\n",ptr);
}