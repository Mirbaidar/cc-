#include <stdio.h>
int main()
{
  int arr[10] = {11, 33, 44, 55, 33, 22, 77, 3, 4, 67};

  int n = 10;

  for (int u = 0; u < 10; u++)
  {
    printf("%d ", arr[u]);
  }
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("\n");
  for (int t = 0; t < 10; t++)
  {
    printf("%d ", arr[t]);
  }
  return 0;
}