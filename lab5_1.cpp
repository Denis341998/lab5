#include <iostream>
#include <cstdlib>
// Строки C++.
#include <string>

using namespace std; // Искать имена в std.

int main()
{
    // Читаем из потока ввода символы и пишем их в поток вывода.
    cout << cin.rdbuf();
    return EXIT_SUCCESS; // Возвратим ОС "код успеха".
}