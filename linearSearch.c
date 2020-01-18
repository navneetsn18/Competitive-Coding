#include<stdio.h>
int linearSearch(int arr[],int n,int s)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(arr[i]==s)
            return i;
    }   
    return 0;
}
int main()
{
    int arr[10],i,n,s,ret=0;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n Enter the array: ");
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("\n Enter the element to be searched: ");
    scanf("%d",&s);
    ret=linearSearch(arr,n,s);
    if(ret==0)
    {
        printf("\n Element %d not found.\n ",s);
    }
    else
    {
        printf("\n Element %d is found at %d\n ",s,ret);
    }
    return 0;
}