//Reverse the array
#include<stdio.h>
void reverse(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d " ,arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the number");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
}