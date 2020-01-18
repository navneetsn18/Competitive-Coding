#include<stdio.h>
#include<time.h>
void countingSort(int A[], int k, int n)
{
	int i, j;
	int B[15], C[100];
	for(i = 0; i <= k; i++)
		C[i] = 0;
	for(j =1; j <= n; j++)
		C[A[j]] = C[A[j]] + 1;
	for(i = 1; i <= k; i++)
		C[i] = C[i] + C[i-1];
	for(j = n; j >= 1; j--)
	{
		B[C[A[j]]] = A[j];
		C[A[j]] = C[A[j]] - 1;
	}
	for(i=1;i<=n;i++)
	{
		A[i]=B[i];
    }
}
int main()
{
    int arr[20],n,i,k=0;
    double total_time;
    clock_t start, end;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n Enter the array: \n");
    for (i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] > k)
		{
			k = arr[i];
		}
	}
    printf("\n The inserted array is: ");
    for(i=1;i<=n;i++)
        printf("%d ",arr[i]);
    start = clock();
    countingSort(arr, k, n);
    end = clock();
    printf("\n The sorted array is: ");
    for(i=1;i<=n;i++)
        printf("%d ",arr[i]);
    total_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\n Counting Sort function took %f seconds to execute \n", total_time);
    return 0;    
}