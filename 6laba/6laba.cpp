#include <iostream>
using namespace std;


/*22.Дана квадратная целочисленная матрица А(nn).
Найти суммы элементов строк, имеющих четные элементы на главной диагонали.*/


int main()
	{
		srand(time(NULL));

		int n = 0;
	
		cout <<  "vvedite znachenie storon kvadrata" << endl;
		cin >> n;    
			
		int** a = new int* [n]; 
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[n]; 
		}
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] = rand() % 10; 
				cout << a[i][j] << " "; 
			}
			cout << endl; 
		}
		
	

	int gs = 0; // будет считать суммы элементов строк, где элемент на глав диагонали чётный
	int l = 0;  // отслеживания "уровней"

	for (int i = 0; i < n; i++) {

		int cs = 0; // будет считать сумму элементов в строке

		for (int j = 0; j < n; j++) {
			cs += a[i][j];
		}

		if (a[l][l] % 2 == 0) {
			gs += cs;
		}

		l += 1;
	}

	cout << gs;

	return 0;
    



	for (int i = 0; i < n; i++)
	{
		delete[]a[i]; // удаление каждого элемента
	}
	delete[] a; // удаление массива
	return 0;

}