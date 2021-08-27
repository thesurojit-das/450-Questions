//Find the maximum and minimum element in an array
#include<stdio.h>
void min(int a[],int n)
{
    int i;
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf(" the min value is %d \n",min);
}
void max(int a[],int n)
{
    int i;
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("the max value is %d ",max);
}
int main()
{
    int n;
    int i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the element of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max(a,n);
    min(a,n);
}