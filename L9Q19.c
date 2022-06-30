#include <stdio.h>
#define XYZ() 10*10 // a function like macro which takes no parameters
int main()
{
    printf("%d\n",XYZ()); // notice the () used with the macro name
}
// Output: 100