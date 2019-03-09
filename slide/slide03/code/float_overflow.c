#include <stdio.h>
int main(void)
{
  float toobig = -1e+39;
  printf("toobig = %f\n", toobig);
  float toosmall = -1e-39;
  printf("toosmall = %f\n", toosmall);
  return 0;
}
