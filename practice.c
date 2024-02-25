#include <stdio.h>
int main()
{
  printf("\n");
  int arr[5] = {10, 3, 6, 7, 67};
  for (int i = 0; i < 5; i++)
  {
    printf("%d  ", arr[i]);
  }
  printf("\n");
  int j = 0;
  int even_sum = 0, odd_sum = 0;
  while (j < 5)
  {
    if (j == 0 || j % 2 == 0)
    {
      even_sum += arr[j];
      arr[j] += 10;
    }
    else
    {
      odd_sum += arr[j];
      arr[j] *= 2;
    }
    j++;
  }
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d  ", arr[i]);
  }
  printf("\nthe difference %d", even_sum - odd_sum);
  // total number of pairs whose sum is equal to x
  int x = 12, x_times = 0;

  int array[8] = {0, 1, 2, 3, 4, 5, 6, 7};
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (array[i] + array[j] == x)
      {
        x_times += 1;
        printf("\n%d + %d = 12", array[i], array[j]);
      }
    }
  }
  printf("\nthe number of times this pair formed is = %d", x_times);
  
  return 0;
}
