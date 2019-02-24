// int_info.cpp
#include<cstdio>
#include<limits>
using namespace std;
int main() 
{    
  printf( "range of int is %d ~ %d\n",
          numeric_limits<int>::min(),
          numeric_limits<int>::max() );
  printf( "sizeof int = %lu bytes\n", sizeof(int) );   
  return 0;
}
