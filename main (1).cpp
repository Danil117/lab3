#include <fstream>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class full_graf  // имя класса
{

public:       // спецификатор доступа public
  void r_w()  // функция чтения и записи файла
  {
    int x, y;
    ofstream prout("text2.txt");
    ifstream prin("text.txt");
    prin >> x >> y;
    prout << (x + y) * 2 << endl;
    prin.close();
    prout.close();
  }
  void graf()  // функция рассчёта значений и их записи в отдельный файл по графику 19
  {
    float x, y;
    int c;
    string s;
    // Код для вычисления Y при X для 16 варианта
    ofstream prout("text1.txt");

    x = -4;
    c = 7;
    for (x; x < 10; x++) {
      prout << c << " ";
      c++;
      float b = 0;
      float a;
      y = b;
      // прямая с углом 45
      if (a > -4 && a < -1) {
        b = x + 1;
      }
      // прямая на оси х
      if (a >= -1 && a <= 1) {
        b = 0;
      }
      // окружность
      if (a > 1 && a <= 5) {
        b = sqrt(4 - ((x - 3) * (x - 3)));
      }
      // прямая по двум точкам
      if (a > 5 && a <= 7) {
        b = ((5 - x) / 5);
      }

      prout << y << "\n";
    }
    prout.close();
    ifstream prin("text1.txt");
    while (getline(prin, s)) {
      cout << s;
      cout << "\n";
    };
    prin.close();
  }
};

int main() {
  full_graf objMessage;  // объявление объекта
  objMessage.r_w();      // вызов функции класса message
  objMessage.graf();      // вызов функции класса message
  return 0;
};