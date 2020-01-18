#include<stdio.h>
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
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2;  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
        merge(arr, l, m, r); 
    } 
} 
int main()
{
    int arr[10],n,i,ch;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n Enter the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }   
    do
    {
        printf("\n Choose from the menu below: ");
        printf("\n 1. Insertion Sort");
        printf("\n 2. Merge Sort");
        printf("\n 3. Exit.");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        if(ch==1)
        {
            insSort(arr,n);
            printf("\n The sorted array is: ");
            for(i=0;i<n;i++)
                printf("%d ",arr[i]);
        }
        else if(ch==2)
        {
            mergeSort(arr,0,n-1);
            printf("\n The sorted array is: ");
            for(i=0;i<n;i++)
                printf("%d ",arr[i]);
        }
        else if(ch==3)
        {
            printf("\n Good Bye!!");
        }
        else
        {
            printf("\n Please try again!!");
        }
        
    }while(ch!=3);
    return 0;    
}
