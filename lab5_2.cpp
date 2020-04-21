#include <iostream>
#include <clocale>

int main()
{
  using namespace std;
  setlocale(LC_ALL, "Russian");
  cout << "Текст" << endl;
  return EXIT_SUCCESS;
}