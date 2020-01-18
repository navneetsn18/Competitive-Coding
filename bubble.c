#include<stdio.h>  
#include<time.h> 
void bubbleSort(int arr[],int n)
{
   int i,j,temp;
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }    
   }
}
int main()
{
    int arr[20],n,i;
    double total_time;
    clock_t start, end;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n Enter the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n The inserted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    start = clock();
    bubbleSort(arr,n);
    end = clock();
    total_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\n The sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n Bubble Sort function took %f seconds to execute \n", total_time);
    return 0;    
}