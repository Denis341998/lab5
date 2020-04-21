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

// Определение своей функции-предиката.
// Проверяет условие: x в квадрате меньше 2.
bool sqr_lt_2(double x)
{
  return x*x < 2;
}

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