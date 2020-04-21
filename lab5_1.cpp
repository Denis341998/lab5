#include <iostream>
#include <cstdlib>
// Строки C++.
#include <string>

using namespace std; // Искать имена в std.

int main()
{
  
// Строчка.
  for (int i = 1; i <= 10; ++i)
  {
    // Столбец.
    for (int j = 1; j <= 10; ++j)
    {
      cout << i * j << " ";
    }

    cout << endl;
  }
  return EXIT_SUCCESS; // Возвратим ОС "код успеха".
}