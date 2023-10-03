#include<stdio.h>

void selection_sort(int a[], int n)
{
    int i,j,min;
    for(i=0; i<n; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(a[min]>a[j])
                min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main(){

    int arr[20], n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter array:\n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    selection_sort(arr, n);
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);

    return 0;
}
