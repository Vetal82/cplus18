// cplus18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Computer.h"

int main()
{
    int N = 5;
    Computer* arr = new Computer[N]
    {
        {"HP", 1.2, 6, false, 20'000},
        {"Acer", 3.2, 8, true, 15'000},
        {"Asus", 2.4, 16, false, 45'000},
        {"Dell", 3.2, 8, true, 17'000},
        {"Apple", 3.2, 32, false, 78'000},
    };
    for (int i = 0; i < N; i++)
    {
        arr[i].showInfo();
    }
    cout << "===================================\n\n";
    int amount = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i].RAM > 10) {
            arr[i].showInfo();
            amount++;
        }
    }
    cout << "Amout:" << amout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
