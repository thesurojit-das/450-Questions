//Kth smallest element
#include<stdio.h>
void swap(int *x,int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
}
int kthSmallest(int arr[],int r, int k)
    {
        int j,i;
        for(i =0;i<r;i++)
        {
            for(j=0;j<r-1-i;j++)
            {
                if (arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
            }
        }
        for(i=0;i<r;i++)
        {
            if(i==k)
            {
                printf("%d",arr[i]);
            }
        }
        
    }
int main()
{
    int r;
    printf("enter the size of array");
    scanf("%d",&r);
    printf("enter the element of an array");
    int arr[r];
    for(int i=0;i<r;i++)
    {
       scanf("%d",&arr[i]);
    }
    int k;
    printf("the kth term\n");
    scanf("%d",&k);
    kthSmallest(arr,r,k-1);
}
