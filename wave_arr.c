/*
Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
In other words, arrange the elements into a sequence such that

 arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

If there are multiple solutions, find the lexicographically smallest one.

Note:The given array is sorted in ascending order, and you don't need to return anything to make
 changes in the original array itself.

Example 1:

Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after
sorting it in wave form are
2 1 4 3 5.

Example 2:

Input:
n = 6
arr[] = {2,4,7,8,9,10}
Output: 4 2 8 7 10 9
Explanation: Array elements after
sorting it in wave form are
4 2 8 7 10 9.


*/


#include <stdio.h>
int main()
{

    int n,arr[50];

    printf("Enter n value : ");
    scanf("%d",&n);

    printf("Enter array elements \n");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int j;
    for (int i=0;i<n;i++)
    {
       if (arr[i]<arr[i+1])
          {
              int temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
i++;
          }
        /*
          if (i%2==0)
          {
             int temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
          }
        */


    }
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);

}