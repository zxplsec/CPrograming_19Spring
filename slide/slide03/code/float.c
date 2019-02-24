// float.c
#include <stdio.h>
#include <float.h>
int main(void)
{
  printf("----float---\n");
  printf(" range: %e ~ %e\n", FLT_MIN, FLT_MAX);
  printf(" epsilon: %e\n", FLT_EPSILON);
  printf(" size:  %lu bytes\n\n", sizeof(float));
  printf("----double---\n");
  printf(" range: %e ~ %e\n", DBL_MIN, DBL_MAX);
  printf(" epsilon: %e\n", DBL_EPSILON);
  printf(" size:  %lu bytes\n\n", sizeof(double));
  printf("----long double---\n");
  printf(" range: %Le ~ %Le\n", LDBL_MIN, LDBL_MAX);
  printf(" epsilon: %Le\n", LDBL_EPSILON);
  printf(" size:  %lu bytes\n", sizeof(long double));
  return 0;
}
