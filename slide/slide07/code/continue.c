#include <stdio.h>
int main(void)
{
  const float MIN = 0.0f, MAX = 100.0f;
  float score;
  float total = 0.0f;
  int n = 0;
  float min = MAX, max = MIN;  
  printf("Enter the first score (q to quit): ");
  while (scanf("%f", &score) == 1)  {
    if (score < MIN || score > MAX) {
      printf("%.1f is invalid. Try again: ", score);
      continue;
    }
    printf("Accepting %.1f:\n", score);
    min = (score < min) ? score : min;
    max = (score > max) ? score : max;
    total += score;
    n++;
    printf("Enter next score (q to quit): ");
  }
  if (n > 0) {
    printf("Average of %d scores is %.1f.\n", n, total/n);
    printf("Low = %.1f, High = %.1f.\n", min, max);
  }
  else
    printf("No valid scores were entered.\n");  
  return 0;
}
