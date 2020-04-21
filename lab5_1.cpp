#include <iostream>
#include <cstdlib>
// Строки C++.
#include <string>

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
  using namespace std; // Искать имена в std.

  string user_name = "user"; // Определить переменную.
  cout << "Hello, " << user_name << "!" << endl;

  user_name = "The Great Whale"; // Изменить значение переменной.
  cout << "I am " << user_name;
  return EXIT_SUCCESS; // Возвратим ОС "код успеха".
}