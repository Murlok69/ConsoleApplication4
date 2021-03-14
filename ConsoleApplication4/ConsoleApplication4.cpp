#include <iostream>

using namespace std;


void inverseArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{

		arr[i] = (arr[i] == 1) ? 0 : 1;

		cout << arr[i] << " "; 

	}

}

void printArray(double arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl; 
}

bool inclArray(int* arr, size_t size)
{
	int num = 1;
	const int step = 3;

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = num;
		num += step;

	}
	return true;

}

int main()
{
	const size_t size = 5;
	int arr[size] = { 1, 0, 1, 0, 1 };

	cout << "TASK 2: " << endl; 

	printArray(arr, size);
	inverseArray(arr, size);

	cout << endl;


	const size_t arrsize = 8;
	int arr2[arrsize];

	if (inclArray(arr2, arrsize))
	{
		cout << "TASK 3: " << endl; 
		printArray(arr2, arrsize);
	}

	const size_t size3 = 5;
	double arr3[size3] = { 4.01, 1.35, 65.13, 25.123, 11.01 };
	
	cout << "TASK 1: " << endl;
	printArray(arr3, size3);


	cout << endl;
}
