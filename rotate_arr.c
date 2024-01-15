//Given an array, rotate the array by one position in clock-wise direction.
#include <stdio.h>
void rotate(int arr[], int n)
{
    //rotate n
    int temp=arr[n-1];
    for (int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}
int main()
{

    int n;
    printf("rotate the array by one position in clock-wise direction\nEnter size of arr: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the arr:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("BEFORE ROTATE:\n");
     for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    rotate(arr,n);

     printf("\nAFTER ROTATE:\n");
     for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
