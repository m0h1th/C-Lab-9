#include <stdio.h>
void arraySum(int[]);
int main()
{
    int a[5];
    printf("Enter five numbers: ");
    for (int i=0;i<5;i++)
        scanf("%d",&a[i]);
    arraySum(a);
}

void arraySum(int a[])
{
    int sum=0;
    for (int i=0;i<5;i++)
        sum+=a[i];
    printf("The sum of the array is %d\n",sum);
}