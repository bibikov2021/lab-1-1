#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int arr[10];

	cout << "Заполните массив: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 0)
			arr[i] = 0;
	}


	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";

	return 0;
}