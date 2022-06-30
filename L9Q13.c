#include <stdio.h>
int arraySum(int *,int);
int main()
{
    int a[20],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The sum of the array is: %d\n",arraySum(a,n));
}

int arraySum(int *a,int n)
{
    int sum=0;
    for (int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}