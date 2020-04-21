#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  double x = 0;
  cout << "x = ";
  cin >> x;
  // Логическое выражение.
  cout << "x*x < 2  == " << (x*x < 2) << endl;
  return EXIT_SUCCESS;
}