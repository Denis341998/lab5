#include <iostream>
#include <cstdlib>
// Строки C++.
#include <string>

using namespace std;

// Дюймы in в метры.
double in2m(double in) { return 0.0254 * in; }

// Футы ft в метры.
double ft2m(double ft) { return 0.304 * ft; }

// Метры m в дюймы.
double m2in(double m) { return m / 0.0254; }

// Метры m в футы.
double m2ft(double m) { return m / 0.304; }

int main()
{
  
  double x = 0;
  cout << "Enter a sequence of numbers x: ";
  while (cin >> x) // Условие продолжения выполнения цикла.
  {
    cout << "ok";
  }
  return EXIT_SUCCESS;
}