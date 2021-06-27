#include <iostream>
using namespace std;

void function()
{
	cout << "Введите нижний регистр\n";
	char a; // определяем символьный тип данных a
	cin >> a;
	cout << "Вывод верхнего регистра\n" << (char)toupper(a) << endl;;// при помощи функции toupper позволяет заменять буквы нижнего регистра в верхний регистр
}

int main()
{
	setlocale(LC_ALL, "ru");
	function(); // вызов функции
	system("pause");
	return 0;
}
