#include <iostream>
#include <string>
using namespace std;
#define PRAISE "What's a super marvelous name!"
int main(void)
{
  string name;
  cout << "What's your name?" << endl;
  cin >> name;
  cout << "Hello, " << name << ". " << PRAISE << endl; 
  return 0;
}
