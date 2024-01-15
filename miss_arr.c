#include<stdio.h>
int main()
{
   int m,temp;
   printf("Enter the size of array : ") ;
   scanf("%d",&m);
   int n=m-1;
   int arr[n];
   printf("Enter arr element : \n");
   for (int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
 for (int i=0;i<n;i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n arrr elements after swaping\n");
   for (int i=0;i<n;i++)
   {
       for (int j=i;j<n;j++)
       {
           if (arr[i]>=arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
    for (int i=0;i<n;i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n");
   int j,i;
   for ( i=0,j=1;i<n;i++,j++)
   {
       if ((j)!=arr[i])
         printf("%d ",j);

   }
}
