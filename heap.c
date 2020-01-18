#include<stdio.h> 
#include<time.h>
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
void heapify(int arr[], int n, int i) 
{ 
	int largest = i; 
	int l = 2*i + 1;
	int r = 2*i + 2;
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 
    if (r < n && arr[r] > arr[largest]) 
		largest = r; 
    if (largest != i) 
	{ 
		swap(&arr[i], &arr[largest]); 
    	heapify(arr, n, largest); 
	} 
} 
void heapSort(int arr[], int n) 
{ 
	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(arr, n, i); 
	for (int i=n-1; i>=0; i--) 
	{ 
		swap(&arr[0], &arr[i]); 
		heapify(arr, i, 0); 
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
    heapSort(arr,n);
    end = clock();
    total_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\n The sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n Heap Sort function took %f seconds to execute \n", total_time);
    return 0;    
} 