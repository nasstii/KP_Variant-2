#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
void fillArray(int** array1, int string, int columns) { //функция для заполнения массива
	for (int i = 0; i < string; i++) {
		for (int j = 0; j < columns; j++) {
			array1[i][j] = rand() % 71 + 1;
		}
	}
}
void printArray(int** array1, int string, int columns) { //функция для вывода массива на экран
	for(int i = 0; i < i < string; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout << array1[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
int diagonal(int** array1, int string, int columns) { //функция для подсчета элементов побочной диагонали
	int j = columns - 1; //индекс столбцов
	int sum = 0;
	for (int i = 0; i < string; i++) {
		sum += array1[i][j];
		j--;
		}
	return sum;
}
void addAkkaynt() {
	Akkaynt newAkkaynt;
	std::cout << "Enter your name: ";
	std::cin >> newAkkaynt.name;
	std::cout << "Enter the password: ";
	std::cin >> newAkkaynt.password;
}

int main() {
	/*Task 3*/
	std::cout << "Task 3" << std::endl;
	int string, columns = 0; //строки и столбцы
	std::cout << "Enter the count of string - ";
	std::cin >> string;
	std::cout << "Enter the count of columns - ";
	std::cin >> columns;
	int **array1 = new int *[string]; //создание двумерного массива
	for (int i = 0; i < string; i++) {
		array1[i] = new int[columns];
	}
	fillArray(array1, string, columns); //вызов функции для заполнения массива
	int sum = diagonal(array1, string, columns); //вызов функции для суммы элементов
	std::cout << "Sum of elements - " << sum << std::endl;
	printArray(array1, string, columns); //вызов функции для вывода элементов на экран 
	std::cout << "Array" << std::endl;
	for (int i = 0; i < string; i++) {
			delete[] array1[i];
		}
	delete[] array1;

	/*Task 4*/
	std::cout << "Task 4" << std::endl;
	struct Akkaynt
	{
		std::string name;
		std::string password;
	};
	return 0;

}
