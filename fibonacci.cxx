#include <iostream>

using namespace std;

int main()
{
  int N=10;
  int x1=0;
  int x2=1;
  int x3=1;
  for(int i=1;i<N;i++)
  {
    x3=x2+x1;
    x1=x2;
    x2=x3;
  }
  cout<<x2;
  return 0;
}
