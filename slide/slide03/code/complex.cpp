#include <cstdio>
#include <complex>
using namespace std;
int main(void)
{
  complex<double> a (1.0, 1.0);
  printf("a = (%.2f, %.2f)\n", a.real(), a.imag());
  complex<double> b = conj(a);
  printf("b = (%.2f, %.2f)\n", b.real(), b.imag());
  printf("arg = %.5f\n", arg(a));
  printf("abs = %.5f\n", abs(a));
  return 0;
}
  
