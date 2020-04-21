#include <iostream>
#include <clocale>

using namespace std;

// Проверить попадание в круг.
bool in_circle(float x, float y,
  float cx, float cy, float r)
  // координаты центра круга и его радиус
{
  // Константы -- после инициализации значения не изменяются.
  const float dx = x - cx,
              dy = y - cy;

  return dx * dx + dy * dy <= r * r;
}

// Проверить попадание в прямоугольник.
bool in_rectangle(float x, float y,
  float left, float right, float bottom, float top)
  // координаты левой, правой, нижней и верхней граней
{
  return left <= x && x <= right // && -- "и"
    && bottom <= y && y <= top;
}

// Проверить попадание в заданную фигуру.
bool in_figure(float x, float y)
{
  // фигура может быть представлена как пересечение полуплоскости и
  // объединения трёх фигур: двух прямоугольников и сегмента круга
  return (in_rectangle(x, y,  2.0,  4.0, -5.0, 5.0)
       || in_rectangle(x, y, -4.0, -2.0, -5.0, 5.0) // || -- "или"
       || in_circle(x, y, -2.0, 0.0, 5.0)) && x >= -4.0;
}

int main()
{
  
  cout << "Enter a sequence of coordinates x, y: ";
  // Определение переменных; условие продолжения; последнее действие на каждом повторении.
  for (float x, y; cin >> x >> y;)
  {
    const bool within_the_circle = in_circle(x, y, 1, -1, 3);
    cout << "(x, y) within the circle == " << within_the_circle << endl;
  }
  return EXIT_SUCCESS;
}