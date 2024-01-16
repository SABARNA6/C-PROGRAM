/*

Given an array of N integers, and an integer K, find the number of
pairs of elements in the array whose sum is equal to K.


Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation:
arr[0] + arr[1] = 1 + 5 = 6
and arr[1] + arr[3] = 5 + 1 = 6.


Example 2:

Input:
N = 4, K = 2
arr[] = {1, 1, 1, 1}
Output: 6
Explanation:
Each 1 will produce sum 2 with any 1.


GREEKFORGREEKS LINK
https://www.geeksforgeeks.org/problems/count-pa++irs-with-given-sum5022/1?page=1&category=Arrays&sortBy=submissions

*/
#include<stdio.h>
int main()
{
     int n,k;
    int arr[50];

    printf("Enter n value : ");
    scanf("%d",&n);

    printf("Enter array : ");

     for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter k value : ");
    scanf("%d",&k);
    int count=0;
     for (int i=0;i<n;i++)
     {   // here j=i+1 because it should check (0 with 1,2,3...) not (0 with 0 ,1,3,2,4,5,5,6,) it should not check n1 with same n1 itself
         for (int j=i+1;j<n;j++)
         {
             if (arr[i]+arr[j]==k)
              {
               //   printf("\n(%d,%d) < %d %d >",arr[i],arr[j],i,j);
                  count++;
                 // break;
              }
         }
     }
     printf("%d",count);
}
