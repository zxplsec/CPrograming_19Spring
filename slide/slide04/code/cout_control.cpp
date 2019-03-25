#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double a = 123.456789012345;
  cout << "Default" << endl;
  cout << a << endl << endl;

  cout << "setprecision" << endl;
  cout << setprecision(1) << a << endl;
  cout << setprecision(3) << a << endl;
  cout << setprecision(5) << a << endl << endl;

  cout << "setprecision and showpoint" << endl;
  cout.setf(ios::showpoint);
  cout << setprecision(1) << a << endl;
  cout << setprecision(3) << a << endl;
  cout << setprecision(5) << a << endl;

  cout << "setprecision and fixed (way 1)" << endl;
  cout.setf(ios::fixed);
  cout << setprecision(1) << a << endl;
  cout << setprecision(3) << a << endl;
  cout << setprecision(5) << a << endl;

  cout << "setprecision and fixed (way2)" << endl;
  cout << fixed << setprecision(1) << a << endl;
  cout << fixed << setprecision(3) << a << endl;
  cout << fixed << setprecision(5) << a << endl;
  cout << setprecision(8) << a << endl;

  cout << "setprecision and scientific" << endl;
  cout << scientific << setprecision(1) << a << endl;
  cout << scientific << setprecision(3) << a << endl;
  cout << scientific << setprecision(5) << a << endl;
}
