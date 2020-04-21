#include <iostream>
#include <cstdlib>
// Строки C++.
#include <string>

using namespace std; // Искать имена в std.

int main()
{
    // Читаем из потока ввода символы и пишем их в поток вывода.
    for (char ch; cin.get(ch);)
        cout.put(ch);
    return EXIT_SUCCESS; // Возвратим ОС "код успеха".
}