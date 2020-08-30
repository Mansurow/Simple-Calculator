#include <conio.h>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\t***Канкулятор***\n\n";

	cout << "4 операции: +,-,/,*\n\n";

	double a, b;
	char Operator;

	cout << "Введите число операцию число: ";
	cin >> a >> Operator >> b;

	/*f (Operator == '+')
		cout << a + b << endl;
	else if (Operator == '-')
		cout << a - b << endl;
	else if (Operator == '/')
		cout << a / b << endl;
	else if << a * b << endl;
	*/

	switch (Operator)
	{
	case'+': cout << a + b << endl; break;
	case'-': cout << a - b << endl; break;
	case'/': cout << a / b << endl; break;
	case'*': cout << a * b << endl; break;

	default: cout << "Неверная операция\n";
	}


	_getch();
	return 0;
}