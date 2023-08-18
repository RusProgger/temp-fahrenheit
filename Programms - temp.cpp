#include <iostream>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;

void temp() {
	double temp; // создаем переменную для ввода температуры фаренгейт
	std::cout << "Введите температуру в фаренгейт: ";
	std::cin >> temp;


	// Алгоритм решения в перевод в Цельсий

	int result_temp = (temp - 32) * 5 / 9;

	std::cout << "Температура в фаренгейт: " << temp << endl;
	Sleep(1500);
	std::cout << "Температура в цельсиях: " << result_temp << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	temp();


	system("pause");
	return 0;
}