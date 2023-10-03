#include <stdio.h>

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
void quicksort(int array[], int low, int high)
{
  if (low < high)
  {
    int pivot_index = partition(array, low, high);
    quicksort(array, low, pivot_index - 1);
    quicksort(array, pivot_index + 1, high);
  }
}
int partition(int array[], int low, int high)
{
  int pivot_value = array[high];
  int i = low;

  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot_value)
    {
      swap(&array[i], &array[j]);
      i++;
    }
  }

  swap(&array[i], &array[high]);

  return i;
}

int main()
{
  int a[20], length;
  printf("Enter length of array:\n");
  scanf("%d",&length);

  printf("Enter array:\n");
  for(int i = 0; i<length; i++)
    scanf("%d",&a[i]);

  quicksort(a, 0, length-1);

  for (int i = 0; i < length; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}
