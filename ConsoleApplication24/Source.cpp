#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>


using namespace std;


void main()
{

	setlocale(LC_ALL, "rus");
	int a;
	cout << "" << endl;
	cin >> a;

	srand(time(NULL));

	if (a == 1) {
	//Создайте одномерный массив целого типа заданного размера M.Задайте значения элементов с помощью генератора случайных чисел.Распечатайте массив.
	
		int x[10];

		for (int i = 0; i < 10; i++) {
		
			x[i] = 1 + rand() % 222;

			cout << x[i] << endl;
		
		}
	
	}

	else if (a == 2) {
	
		/*Массив предназначен для хранения значений весов двадцати человек.
			С помощью датчика случайных чисел заполнить массив целыми значениями,
			лежащими в диапазоне от 50 до 100 включительно*/

		int x[20];

		for (int i = 0; i < 20; i++) {

			x[i] = 50 + rand() % 50;

			cout << x[i] << endl;

		}

	
	
	
	}

	else if (a == 3) {
	/*
	Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали :
	убывающую последовательность;
	возрастающую последовательность*/

		int x[8];

		for (int i = 0; i < 8; i++) {
		
			x[i] = 1 + rand() % 100;
					
		}

		for (int j = 7; j >= 0; j--) {
		
			cout << x[j] << "  ";
		
		}

		cout << endl;

		for (int h = 0; h < 8; h++) {

			cout << x[h] << "  ";

		}

	
	
	}

	else if (a == 4) {
		/*lан массив целых чисел.Выяснить:
		является ли s - й элемент массива положительным числом
		b.является ли k - й элемент массива четным числом
		c.какой элемент массива больше : k - й или s - й.*/

		int x[100];

		for (int i = 0; i < 100; i++) {

			x[i] = 100 + rand() % 100;

		}
		int k, s;

		cout << "Введите элемент массива: " << endl;
		cin >> k;
		cin >> s;

		if (x[s] > 0) {

			cout << "Число положительное" << endl;

		}

		if ((x[k] % 2) == 0) {

			cout << "Число четное" << endl;

		}

		if (x[s] > x[k]) {
		
			cout << "1 число больше 2го" << endl;

		}

		else {
		
			cout << "2 ичсло больше 1го" << endl;
		
		}



	
	
	}

	else if (a == 5) {
	
	/*ан массив.Все его элементы :
	уменьшить на 20
	умножить на последний элемент
	увеличить на число В.*/

		int x[20];

		for (int i = 0; i < 20; i++) {
		
			x[i] = 1 + rand() % 120;
				
		}
		back:
		cout << "Vvedite nomer zadaniya" << endl;
		cin >> a;
			if (a == 1) {
				for (int h = 0; h < 20; h++) {
					x[h] = x[h] - 20;
					cout << x[h] << endl;
				
				}
				goto back;
			
			}

			if (a == 2) {
				for (int j = 0; j <19; j++) {
					x[j] = x[j] * x[19];
					cout << x[j] << endl;
					
				}
				goto back;

			}
			int B;
			cout << "Vvedite chislo B" << endl;
			cin >> B;
			if (a == 3) {
				for (int k = 0; k < 20; k++) {
					x[k] = x[k] + B;
					cout << x[k] << endl;

				}
				goto back;

			}
	
	}

}