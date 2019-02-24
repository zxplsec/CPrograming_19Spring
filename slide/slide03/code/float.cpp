// float.cpp
#include <iostream>
#include <limits>
using namespace std;
int main(void)
{
  cout << "----float----" << endl
       << "range: " << numeric_limits<float>::min()
       << " ~ "     << numeric_limits<float>::max() << endl
       << "prec: "  << numeric_limits<float>::epsilon() << endl
       << "size: "  << sizeof(float) << endl << endl;
  
  cout << "----double----" << endl
       << "range: " << numeric_limits<double>::min()
       << " ~ "     << numeric_limits<double>::max() << endl
       << "prec: "  << numeric_limits<double>::epsilon() << endl
       << "size: "  << sizeof(double) << endl;

  cout << "----long double----" << endl
       << "range: " << numeric_limits<long double>::min()
       << " ~ "     << numeric_limits<long double>::max() << endl
       << "prec: "  << numeric_limits<long double>::epsilon() << endl
       << "size: "  << sizeof(long double) << endl;
  return 0;
}
