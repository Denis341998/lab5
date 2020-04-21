#include <iostream>
#include <cstdlib>
// Строки C++.
#include <string>

using namespace std; // Искать имена в std.

int main()
{
  
// Определение переменных; условие продолжения; последнее действие на каждом повторении.
  for (int i = 1; i <= 10; ++i) // ++i --> i = i + 1
  {
    for (int j = 1; j <= 10; ++j)
    {
      cout << i << "*" << j << "\t== " << i * j << endl;
    }
  }
  return EXIT_SUCCESS; // Возвратим ОС "код успеха".
}