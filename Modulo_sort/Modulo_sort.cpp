#include <iostream>
#include <cstdlib>

using namespace std;

void method_sort(int* array, size_t n)                    // Метод сортирует числа по модулю
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (fabs(array[j]) > fabs(array[j + 1]))
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void show_array(int* array, size_t n)                     // Метод выводит отсортированный массив в терминал
{
    cout << " Вывод: ";
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << " { " << array[i] << ',';
        }
        else
        {
            if (i == n - 1)
            {
                cout << ' ' << array[i] << " }" << endl;
            }
            else
            {
                cout << ' ' << array[i] << ',';
            }
        }
    }
}

int main()
{
    system("chcp 1251>nul");
    system("color 80");

    int arr[]{ -100,-50,-5,1,10,15 };                     // Объявляем и инициализируем массив
    
    method_sort(arr, size(arr));                          // Вызываем метод сортировки с передачей ему массива и размера массива
    show_array(arr, size(arr));                           // Вызываем метод вывода в терминал с передачей ему массива и размера массива

    system("pause>nul");
    return 0;
}