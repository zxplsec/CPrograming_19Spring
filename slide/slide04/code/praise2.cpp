#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define PRAISE "What's a super marvelous name!"
int main(void)
{
  string name;
  cout << "What's your name?" << endl;
  cin >> name;
  cout << "Hello, " << name << ". "
       << PRAISE << endl;
  cout << "Your name of " << name.size()
       << " letters occupies " << sizeof name
       << " memory cells." << endl;
  cout << "PRAISE has " << strlen(PRAISE)
       << " letters and occupies " << sizeof PRAISE
       << " memory celss." << endl;
  return 0;
}
