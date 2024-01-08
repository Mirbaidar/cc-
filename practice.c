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
  return 0;
}
