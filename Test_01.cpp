﻿#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	char msg[] = "This is a test";
	//char msg [] = "↨ + *0c * 0c"c7&07"
	char key = 12611;
	
	cout << "Исходное сообщение: " << msg << "\n";
	for (int i = 0; i < strlen(msg); i++)
	msg[i] = msg[i] ^ key;

	cout << "Зашифрованное сообщение: " << msg << "\n";
	for (int i = 0; i < strlen(msg); i++)
	msg[i] = msg[i] ^ key;
		
	cout << "Расшифрованное сообщение: " << msg << "\n";
	
	return 0;

	}















// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
