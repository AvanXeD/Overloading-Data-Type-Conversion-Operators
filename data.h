#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
struct part {
	int cost = 0;
	string name = "default";
};
class furniture
{
private:
	part data[5];
	int value;
public:
	furniture()
	{
		part nft[] = { {3999,"Шафа"}, {4599,"Диван"}, {1999,"Тумба"}, {2399,"Люстра"}, {15999,"Глеб"} };
		for (int i = 0; i < 5; i++) {
			data[i] = nft[i];
		}
		cout << "Конструктор без параметров\n";
	}
	furniture(furniture& c)
	{
		for (int i = 0; i < 5; i++) {
			data[i] = c.data[i];
		}
		cout << "Конструктор копирования\n";
	}
	furniture(int a)
	{
		part nft[] = { {3999,"Шафа"}, {4599,"Диван"}, {1999,"Тумба"}, {2399,"Люстра"}, {15999,"Глеб"} };
		for (int i = 0; i < 5; i++) {
			data[i].name = nft[i].name;
			data[i].cost = nft[i].cost * a;
		}
		cout << "Конструктор преобразования\n";
	}
	friend part getData(int i, furniture& r);
	friend void putIn(int i, furniture& r);
	furniture operator ++(int z) {
		furniture old = *this;
		for (int round = 0; round < 5; round++) {
			data[round].cost++;
		}
		return old;
	}
	operator char* ()
	{
		char* str_value = new char[10];
		snprintf(str_value, 10, "%d", value);
		return str_value;
	}
	operator int()
	{
		return value;
	}
	operator double()
	{
		return value;
	}
	furniture operator+() {
		cout << "      Назва               Ціна" << endl;
		for (int j = 0; j < 5; j++) {
			cout << "      " << data[j].name << "              " << data[j].cost << endl; // to do
		}
		return *this;
	}
	furniture operator --(int z) {
		furniture old = *this;
		for (int round = 0; round < 5; round++) {
			data[round].cost--;
		}
		return old;
	}
	furniture operator !=(string z) {
		furniture old = *this;
		cout << "      Назва               Ціна" << endl;
		for (int round = 0; round < 5; round++) {
			if (data[round].name != z) {
				cout << "      " << data[round].name << "              " << data[round].cost << endl; // to do
			}
		}
		return old;
	}
	~furniture() {}

};
part getData(int i, furniture& r) {
	return r.data[i];
}
void putIn(int i, furniture& r) {
	r.value = i;
}
