#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  double x = 0;
  cout << "x = ";
  cin >> x;
  cout << "x*x ";
  if (x*x < 2) // Условие.
    cout << " < ";
  else // Альтернатива.
    cout << " > ";
  cout << "2" << endl;
  return EXIT_SUCCESS;
}