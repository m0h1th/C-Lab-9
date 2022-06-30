#include <stdio.h>
int arraySquare(int *, int);
int main()
{
    int a[20],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The sum of squares of each element is: %d\n",arraySquare(a,n));
}

int arraySquare(int *a,int n)
{
    int sum=0;
    for (int i=0;i<n;i++)
        sum+=a[i]*a[i];
    return sum;
}