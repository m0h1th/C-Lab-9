#include <stdio.h>
#define XYZ(a) a*a*a
int main()
{
    printf("%d\n",XYZ(10));
    printf("%d\n",XYZ(2+1));
    //printf("%d\n",XYZ((2+1)); --> Gives an error
}