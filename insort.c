#include<stdio.h>
#include<time.h>
void insSort(int arr[],int n)
{
    int i,j,key;
    for(j=1;j<n;j++)
    {
        key=arr[j];
        i=j-1;
        while (i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i-=1;
        }
        arr[i+1]=key;
    }
}
int main()
{
    int arr[10],n,i;
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
    insSort(arr,n);
    end = clock();
    total_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\n The sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n Insertion Sort function took %f seconds to execute \n", total_time);
    return 0;    
}