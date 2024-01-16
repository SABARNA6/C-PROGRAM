/*
Given an array a of size N which contains elements from 0 to N-1, you need to find
all the elements occurring more than once in the given array. Return the answer in
ascending order. If no such element is found, return list containing [-1].

Note: The extra space is only for the array to be returned. Try and perform
 all operations within the provided array.

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output:
-1
Explanation:
There is no repeating element in the array. Therefore output is -1.

Example 2:

Input:
N = 5
a[] = {2,3,1,2,3}
Output:
2 3
Explanation:
2 and 3 occur more than once in the given array.

*/
#include<stdio.h>
int array(int arr[],int n);
void sort(int []);
int main()
{
    int n;
    int arr[50];
    printf("Enter n value : ");
    scanf("%d",&n);
    printf("Enter array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

     //  sort(arr);
     //sorting array
      for (int i=0;i<n;i++)
      {
         int temp;
         for (int j=i;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }

      }
    /*printf("AFTER\n");
      for(int i=0;i<n;i++)
       printf("%d ",arr[i]);
   printf("\n\nfiifif\n\n");

   */
    if (array(arr,n))
        printf("");
    else
        printf("\n\n-1");

}
//function
int array(int arr[],int n)
{
   int f=1;
    for (int i=0;i<n;i++)
    {
        int flag=0;
        for (int j=i;j<n;j++)
        {
            if (arr[i]==arr[j])
                flag++;
            if(flag>1)
            {
                f=0;

        printf("%d ",arr[i]);
        break;
            }
        }

      //  printf("%d ",arr[i]);
    }
    if (f)
    return 0;
    else
     return 1;
}

