#include <iostream>
#include <fstream>
using namespace std;
//#2 Построить все перестановки
bool nextCombObj(int *perestanovka, int n);

int main()
{
    int n = 5;
    int arr[] = { 0,1,2,3,4 };
    int* perestanovka = new int[n];
    for (int i = 0; i < n; ++i)
    {
        perestanovka[i] = 0;
    }
    ofstream A("Perestanovki.txt");
    for (int i = 0; i < n; ++i)
    {
        A<< arr[perestanovka[i]];
    }
    A << endl;
    while ((nextCombObj(perestanovka, n)))
    {
        for (int i = 0; i < n; ++i)
        {
            A << arr[perestanovka[i]];
        }
        A << endl;
    }
    system("pause");
    return 0;
}
bool nextCombObj(int* perestanovka, int n)
{
    int j = n-1;
    while (j >= 0 && perestanovka[j] == n - 1)
        j--;
    if (j == -1) return false;
    perestanovka[j]++;
    {
        for (int q = j + 1; q < n; q++)
            perestanovka[q] = 0;
    } return true;

}