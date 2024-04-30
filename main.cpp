#include <iostream>
using namespace std;

/* ћассивы */

int main()
{
	setlocale(LC_ALL, "rus");

	//array[0] обращение к нулю 
	//тип_данных им€ [количество элементов]

	int arr[4];

	//добавл€ем в массив значение 

	arr[0] = 5;
	arr[1] = 3;
	arr[2] = 4;
	arr[3] = 7;

	cout << arr[0];
}