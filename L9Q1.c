#include <stdio.h>
int main()
{
    int num=5,*ptr;
    ptr=&num;
    printf("The value of the variable num is: %d\n",num);
    printf("The value of the variable num is: %d\n",*ptr);
    //use of pointer to change the value of the variable
}