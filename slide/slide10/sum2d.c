#include <stdio.h>
#define COL 3
void sum_rows(int arr[][COL], int r, int * sum);
void show_array1d(int * ar, int n);

int main(void)
{
  int matrix[2][COL] = { {1,2,3},
			 {4,5,6} };
  int rsum[2], csum[COL];

  sum_rows(matrix, 2, rsum);
  show_array1d(rsum, 2);

  return 0; 
}


void sum_rows(int arr[][COL], int r, int * sum)
{
  int i, j;

  for (i = 0; i < r; i++) {
    sum[i] = 0;
    for (j = 0; j < COL; j++)
      sum[i] += arr[i][j];
  }   
}

void show_array1d(int * ar, int n)
{
  for (int i = 0; i < n; i++)
    printf("%3d ", ar[i]);
  putchar('\n');
}
