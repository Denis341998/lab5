#include <iostream>
#include <clocale>

// Определение своей функции-предиката.
// проверить попадание в круг
bool in_circle(float x, float y,
  float cx, float cy, float r)
  // координаты центра круга и его радиус
{
  // Константы -- после инициализации значения не изменяются.
  const float dx = x - cx,
              dy = y - cy;

  return dx * dx + dy * dy <= r * r;
}

int main()
{
  using namespace std;
  setlocale(LC_ALL, "Russian");
  cout << "Текст" << endl;
  return EXIT_SUCCESS;
}