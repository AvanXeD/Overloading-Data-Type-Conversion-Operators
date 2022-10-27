#include "data.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 1;
	char swtch;
	cout << "1 - конструктор копіювання." << endl;
	cout << "2 - конструктор з параметрами." << endl;
	cout << "Натисніть будь-яку кнопку для того щоб обрати конструктор за замовченням." << endl;
	cout << "Оберіть параметр запуску: ";
	cin >> swtch;
	cout << endl;
	furniture a1;
	switch (swtch) {
	case '1': {
		furniture a2;
		furniture a1 = a2;
		break; };
	case '2': {
		furniture a1(4);
		break; };
	default: {
		furniture a1;
	};
	}
	system("cls");
	while (i != 0) {
		cout << "1 - Вивести на єкран " << endl;
		cout << "2 - збільшення ціни на задану величину" << endl;
		cout << "3 - не дорівнює за назвами" << endl;
		cout << "4 - зменшення на задану величину" << endl;
		cout << "5 - змінити тип данних" << endl;
		cout << "6 - Вийти з програми" << endl;
		cout << "Виберіть варіант: ";
		cin >> swtch;
		cout << endl;
		switch (swtch) {
		case '1': {
			+a1;
			system("pause");
		}
				break;
		case '2': {
			int grade;
			cout << "Введіть величину на яку хочете збільшити ціну: ";
			cin >> grade;
			cout << endl;
			for (int h = 0; h < grade; h++) {
				a1++;
			}
			system("cls");
			cout << "Величина була збільшена!" << endl;
			system("pause");
		}
				break;
		case '3': {
			string OG;
			cout << "Введіть назву: ";
			cin >> OG;
			cout << endl;
			a1 != OG;
			system("pause");
		}
				break;
		case '4': {
			int grade;
			cout << "Введіть величину на яку хочете зменшити ціну: ";
			cin >> grade;
			cout << endl;
			for (int h = 0; h < grade; h++) {
				a1--;
			}
			system("cls");
			cout << "Величина була зменшена!" << endl;
			system("pause");
		}
				break;
		case '6': {
			cout << "Ви точно бажаєте вийти? (y/n) ";
			cin >> swtch;
			if ((swtch == 'y') || (swtch == 'Y')) {
				i = 0;
			}
			cout << endl;
			system("pause");
		}
				break;
		case '5': {
			bool ground = false;
			string toFind;
			part zxc;
			do {

				system("cls");
				+a1;
				cout << "Виберіть назву числа, яке потрібно перетворити: ";
				cin >> toFind;
				cout << endl;
				for (int l = 0; l < 5; l++) {
					zxc = getData(l, a1);
					if (toFind == zxc.name) {
						ground = true;
						putIn(zxc.cost, a1);
						double d = a1; //преобразование к типу double
						char* str = a1; //преобразование к типу char*
						int i = a1; //преобразование к типу int
						cout << "as double: " << d << endl;
						cout << "as string: " << str << endl;
						cout << "as int: " << i << endl;
					}
				}
				if (ground == false) {
					cout << "Такої назви не існує! " << endl;
					system("pause");
				}
			} while (ground == false);
			system("pause");
		}
				break;
		default: {
			cout << "Неправильно обрана опція!" << endl;
		}
		}
		system("cls");
	}
	return 1;
}
