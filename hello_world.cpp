#include <iostream>
#include <string>

// Программа для демонстрации персонализированного Hello World
// Исправлено: убрано using namespace std для лучшей читаемости кода

int
main()
{
  std::string name;  // Переменная для хранения имени пользователя

  // Запрашиваем имя пользователя
  std::cout << "Enter your name: ";
  std::cin >> name;  // Считываем ввод

  // Выводим персонализированное приветствие
  std::cout << "Hello world from " << name << std::endl;

  return 0;  // Программа завершена успешно
}
